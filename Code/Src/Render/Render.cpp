//
// Created by talldie on 02/03/2022.
//

#include "Render.h"

Render::Render()
{
	mInstance = {};
}

Render::~Render()
{

}

void Render::defaults()
{
	mInstance.defaults();
}

uint32_t Render::create()
{
	mInstance.create();
	return 0;
}

void Render::destroy()
{
	mInstance.destroy();
}
