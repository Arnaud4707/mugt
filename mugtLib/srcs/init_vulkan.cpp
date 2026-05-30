
#include "includes_graph.hpp"

static VkInstance createInstance(t_window *win)
{
	VkApplicationInfo appInfo{};
	appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	appInfo.pApplicationName = win->name;
	appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
	appInfo.pEngineName = "Pas de moteur";
	appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
	appInfo.apiVersion = API_VERSION;

	VkInstanceCreateInfo createInfo{};
	createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	createInfo.pApplicationInfo = &appInfo;
	
	uint32_t	glfwExtensionCount = 0;
	const char **glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);
	
	createInfo.enabledExtensionCount = glfwExtensionCount;
	createInfo.ppEnabledExtensionNames = glfwExtensions;
	createInfo.enabledLayerCount = 0; /* pas de couche de validation pour l'instant */
	
	VkInstance instance;
	if (vkCreateInstance(&createInfo, nullptr, &instance) != VK_SUCCESS) {
		throw std::runtime_error("Vulkan Instance failed.");
	}
	return (instance);
}

static void	initVulkanSurface(t_window *win)
{
	win->instance = createInstance(win);
	VkSurfaceKHR surface;
	if (glfwCreateWindowSurface(win->instance, win->window, nullptr, &surface) != VK_SUCCESS) {
		throw std::runtime_error("Surface failed.");
	}
}

void	initWindow(t_window *win)
{
	if (!glfwInit()) {
		throw std::runtime_error("GLFW Init failure.");
	}
	
	/* permet de dire a glfw que je veux pas opengl */
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	if (!win->name)
		win->name = "No Name";
	win->window = glfwCreateWindow(win->width, win->height, win->name, nullptr, nullptr);	
	if (!win->window) {
		glfwTerminate();
		throw std::runtime_error("Window failed.");
	}
	initVulkanSurface(win);
}

