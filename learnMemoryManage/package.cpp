#include "stdafx.h"
#include <assert.h>
#include "package.h"


package::package()
{

}


package::~package()
{

}

void package::addOneBall(balls one_ball)
{

}
void package::addBalls(vector<pair<unsigned int, color>> color_balls)
{
	assert(color_balls.size() > 0);
	for each (auto one_ball in color_balls)
	{
		this->_color_balls[one_ball.second] += one_ball.first;
	}
	
}
void package::takeBalls(vector<pair<unsigned int, color>> color_balls)
{
	if (color_balls.size() == 0 )
	{
		return;
	}
	color ball_color;
	unsigned int ball_num;
	for each (pair<unsigned int, color> one_type_ball in color_balls)
	{
		ball_color = one_type_ball.second;
		ball_num = one_type_ball.first;
		if (this->_color_balls[ball_color] >= ball_num)
		{
			this->_color_balls[ball_color] -= ball_num;
		}
		else
		{
			this->_color_balls[ball_color] = 0;
		}
	}
}

//private


