#include "includes_graph.hpp"

#include <vector>

int main()
{
	t_window	win = {0};
	win.height = 600;
	win.width = 800;
	try {
		initWindow(&win);
		selectGPU(&win);
	} catch (const std::exception &e) {
		std::cout << e.what();
	}
	while(1);
	destroyWindow(&win);
	return (0);
}
