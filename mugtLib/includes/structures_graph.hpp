#pragma once

#include "includes_graph.hpp"

typedef struct s_window
{
	GLFWwindow			*window;
	VkInstance			instance;
	VkPhysicalDevice	physicalDevice;
	uint32_t			width;
	uint32_t			height;
	char				*name;
}	t_window;
