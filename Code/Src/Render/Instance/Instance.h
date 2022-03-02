#ifndef SLEET_INSTANCE_H
#define SLEET_INSTANCE_H

#include "vulkan/vulkan.h"

class Instance
{
public:
	Instance();

	void defaults();

	uint32_t create();

	void destroy();
private:
	VkApplicationInfo    mApplicationInfo;
	VkInstanceCreateInfo mInstanceCreateInfo;
};


#endif //SLEET_INSTANCE_H
