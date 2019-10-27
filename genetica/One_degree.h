#pragma once
#include "Lin_equation.h"
class One_degree :
	public Lin_equation
{
private:
	std::vector <double> koef = { 0, 0 };
public:
	One_degree(std::vector <double>);
	std::vector <double> solve();
	void printSolve();
};

