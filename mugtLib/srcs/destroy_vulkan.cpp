#include "includes_graph.hpp"

void	destroyWindow(t_window *win)
{
	glfwDestroyWindow(win->window);
	glfwTerminate();
}
