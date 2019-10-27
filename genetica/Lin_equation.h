#pragma once
#include <cmath>
#include <vector>

class Lin_equation
{
private:
	int deg;
	std::vector <double> koef;
public:
	Lin_equation(int degree, std::vector <double> newkoef);
	virtual std::vector <double> solve() = 0;
	virtual void printSolve() = 0;
	bool isEven() const;
	bool isUneven() const;
	bool isCommon() const;
};
