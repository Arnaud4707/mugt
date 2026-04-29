
#include "includes_graph.h"

t_window	*init_window(int x, int y, int width, int height, char *WindowName)
{
	t_window	*rep;

	rep = calloc(1, sizeof(t_window));
	if (!rep)
		return (NULL);
	
	/* ouvrir connexion au server X (pour utiliser X11) */
	rep->display = XOpenDisplay(NULL);
	if (!rep->display) {
		write(2, "Error creating display.\n", 24);
		free(rep);
		return (NULL);
	}
	rep->screen = DefaultScreen(rep->display);	

	/* Creer la fenetre */
	rep->window = XCreateSimpleWindow(rep->display, RootWindow(rep->display, rep->screen), x, y, width, height, 1, WhitePixel(rep->display, rep->screen), BlackPixel(rep->display, rep->screen));
	
	/* Definir le nom de la fenetre */
	XStoreName(rep->display, rep->window, WindowName);

	/*Definir inputs recevables */
	XSelectInput(rep->display, rep->window, ExposureMask | KeyPressMask | ButtonPressMask);

	/*Faire apparaitre la fenetre je suppose */
	XMapWindow(rep->display, rep->window);
	
	/*Initialiser le GC pour les couleurs */
	rep->gc = DefaultGC(rep->display, rep->screen);
	return (rep);
}



