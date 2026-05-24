#pragma once


#include <X11/Xlib.h>

# define GLFW_INCLUDE_VULKAN
#  include <GLFW/glfw3.h>
# undef GLFW_INCLUDE_VULKAN

//#include <vulkan.h>
#include <stdexcept>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <iostream>
#include "structures_graph.hpp"
#include "functions_graph.hpp"


/* The defines */

#ifndef API_VERSION
# define API_VERSION VK_API_VERSION_1_0
#endif


#ifndef VK_VERSION
# define VK_VERSION 1, 0, 0
#endif


