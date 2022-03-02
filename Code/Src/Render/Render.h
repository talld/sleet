#ifndef SLEET_RENDER_H
#define SLEET_RENDER_H

#include "cstdint"

#include "Instance.h"

class Render
{
public:
	Render();

	~Render();

	void defaults();

	uint32_t create();

	void destroy();

protected:

	Instance mInstance;
};


#endif //SLEET_RENDER_H
