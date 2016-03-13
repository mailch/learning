#pragma once
#include "balls.h"

enum class color { red, yellow, blue, white, black };

class balls
{
public:
	balls(color ball_collor);
	~balls();
	color seeColor();

private:
	color _ball_color;

	
};

class ballsFactory
{
public:
	ballsFactory();
	~ballsFactory();
	balls createBalls(unsigned int num, color ball_color);

private:

};

ballsFactory::ballsFactory()
{
}

ballsFactory::~ballsFactory()
{
}

balls ballsFactory::createBalls(unsigned int num, color ball_color)
{
	balls color_ball(ball_color);
	return color_ball;
}
