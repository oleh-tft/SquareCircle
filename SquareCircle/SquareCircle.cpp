#include "SquareCircle.h"
#include<iostream>
using namespace std;

SquareCircle::SquareCircle(double A, double D):Square(A),Circle(D)
{
}

void SquareCircle::Test()
{
	if (GetD() > GetA())
	{
		cout << "SquareCircle can not be created\n";
		return;
	}
	cout << "SquareCircle can be created\n";
}
