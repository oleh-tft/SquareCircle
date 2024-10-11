#pragma once
#include"Square.h"
#include"Circle.h"
class SquareCircle : public Square, public Circle
{
public:
	SquareCircle(double A, double D);
	void Test();
};

