
#include "includes_graph.hpp"

/*
VkInstance *init_instance()
{
	VkApplicationInfo app;
	app.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	app.pApplicationName = "Instance";
	app.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
	app.pEngineName = "No Engine";
	app.engineVersion = VK_MAKE_VERSION(1, 0, 0);
	app.apiVersion = VK_API_VERSION_1_0;

	VkInstanceCreateInfo createInfo;
	createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	createInfo.pApplicationInfo = &app;

	VkInstance *instance = new VkInstance;
	if (!instance)
		return (0);
	VkResult result = vkCreateInstance(&createInfo, NULL, instance);
	if (result != VK_SUCCESS) {
		std::cout << "Error creating instance.\n";
		return (0);
	}
	else
		std::cout << "Letsgo\n";
	return (instance);
}
*/
