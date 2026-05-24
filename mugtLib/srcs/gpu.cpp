#include "includes_graph.hpp"

uint8_t	isDeviceSuitable(VkPhysicalDevice device)
{
	VkPhysicalDeviceProperties deviceProperties;
	vkGetPhysicalDeviceProperties(device, &deviceProperties);

	VkPhysicalDeviceFeatures deviceFeatures;
	vkGetPhysicalDeviceFeatures(device, &deviceFeatures);

	return (deviceProperties.deviceType == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU);
}

inline void enumPhysicalDevices(VkInstance &instance, uint32_t &deviceCount) {
	vkEnumeratePhysicalDevices(instance, &deviceCount, nullptr);
}



void	selectGPU(t_window *win) {
	VkPhysicalDevice physicalDevice = VK_NULL_HANDLE;
	uint32_t device_cpt = 0;
	vkEnumeratePhysicalDevices(win->instance, &device_cpt, nullptr);
	if (device_cpt == 0) {
		throw std::runtime_error("Y'a rien");
	}
	std::vector<VkPhysicalDevice> devices(device_cpt);
	vkEnumeratePhysicalDevices(win->instance, &device_cpt, devices.data());
	for(const auto &device : devices) {
		if (isDeviceSuitable(device)) {
			physicalDevice = device;
			break;
		}
	}
	if (physicalDevice == VK_NULL_HANDLE && !devices.empty()) {
		physicalDevice = devices[0];
	}
	if (physicalDevice == VK_NULL_HANDLE) {
		throw std::runtime_error("Y'a rien (le 2)");
	}
	VkPhysicalDeviceProperties props;
	win->physicalDevice = physicalDevice;
	
	/*
	 * Sert juste a voir le GPU selectionne :
	vkGetPhysicalDeviceProperties(physicalDevice, &props);
	std::cout << "GPU SELECTIONNE : " << props.deviceName << std::endl;
	*/

}

