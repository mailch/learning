#include "stdafx.h"
#include "balls.h"


balls::balls(color ball_color)
{
	this->_ball_color = ball_color;
}


balls::~balls()
{
}

color balls::seeColor()
{
	return this->_ball_color;
}
