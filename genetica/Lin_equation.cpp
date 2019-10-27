#include "Lin_equation.h"
#include <iostream>



Lin_equation::Lin_equation(int degree, std::vector <double> newkoef){
	if (newkoef.size() == degree + 1) {
		deg = degree;
		koef = newkoef;
	}
	else std::cerr << "Not equation of " << degree << " degree" << std::endl;
};

bool Lin_equation::isEven() const {
	for (int i = 1; i < koef.size(); i += 2) {
		if (koef[i] != 0) return false;
	}
	return true;
}

bool Lin_equation::isUneven() const {
	for (int i = 0; i < koef.size(); i += 2) {
		if (koef[i] != 0) return false;
	}
	return true;
}

bool Lin_equation::isCommon() const {
	return !(isEven() || isUneven());
}