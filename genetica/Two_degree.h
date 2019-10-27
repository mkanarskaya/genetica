#pragma once
#include "Lin_equation.h"
#include <array>

class Two_degree :
	public Lin_equation
{
private:
	std::vector <double> koef = { 0, 0, 0};
public:
	Two_degree(std::vector <double>);
	std::vector <double> solve();
	void printSolve();
};
