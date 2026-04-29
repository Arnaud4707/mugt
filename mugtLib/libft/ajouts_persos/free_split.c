#include "ajouts.h"

void	free_split(char **s)
{
	if (!s)
		return;
	for(int i = 0; s[i]; i++)
		free(s[i]);
	free(s);
}
