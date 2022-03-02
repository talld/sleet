//
// Created by talldie on 02/03/2022.
//

#include "Instance.h"

Instance::Instance()
{
	mApplicationInfo    = {};
	mInstanceCreateInfo = {};
}

void Instance::defaults()
{
	// VkApplicationInfo:
	// https://www.khronos.org/registry/vulkan/specs/1.3-extensions/man/html/VkApplicationInfo.html
	mApplicationInfo.sType              = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	mApplicationInfo.pNext              = nullptr;
	mApplicationInfo.pApplicationName   = "REPLACE_ME";
	mApplicationInfo.applicationVersion = VK_MAKE_VERSION(0, 0, 0);
	mApplicationInfo.pEngineName        = "REPLACE_ME";
	mApplicationInfo.engineVersion      = VK_MAKE_VERSION(0, 0, 0);
	mApplicationInfo.apiVersion         = VK_API_VERSION_1_1;

	// VkInstanceCreateInfo
	// https://www.khronos.org/registry/vulkan/specs/1.3-extensions/man/html/VkInstanceCreateInfo.html
	mInstanceCreateInfo.sType                   = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	mInstanceCreateInfo.pNext                   = nullptr;
	mInstanceCreateInfo.pApplicationInfo        = &mApplicationInfo;
	mInstanceCreateInfo.enabledLayerCount       = 0;
	mInstanceCreateInfo.ppEnabledLayerNames     = nullptr;
	mInstanceCreateInfo.enabledExtensionCount   = 0;
	mInstanceCreateInfo.ppEnabledExtensionNames = nullptr;
}

uint32_t Instance::create()
{
	return 0;
}

void Instance::destroy()
{

}
