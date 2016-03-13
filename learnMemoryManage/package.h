#pragma once
#include "stdafx.h"
#include "balls.h"
using namespace std;


class package
{
public:
	package();
	~package();
	
	void addOneBall(balls one_ball);
	void addBalls(vector<pair<unsigned int, color>> color_balls);
	void takeBalls(vector<pair<unsigned int, color>> color_balls);
private:
	unordered_map<color, unsigned int> _color_balls;

	

};

