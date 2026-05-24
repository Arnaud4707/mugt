
#pragma once

#include "includes_graph.hpp"

void	initWindow(t_window *win);
void	destroyWindow(t_window *win);

uint8_t	isDeviceSuitable(VkPhysicalDevice device);

void	selectGPU(t_window *win);

