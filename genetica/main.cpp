#include "Lin_equation.h"
#include "One_degree.h"
#include "Two_degree.h"

using namespace std;

int main() {
	//в векторе член при переменной степени уравнения не равны 0
	Two_degree a({ -1.,2.,1. }) , b({ 3.,-2.,1. }), c({ 30., 41., 18. });
	One_degree d({ 1.,1.}), e({ 2.,1. });
	vector <Lin_equation*> geter = { &a, &b, &c , &d , &e };
	for (int i = 0; i < geter.size(); i++)
	{
		geter[i]->printSolve();
	}
	system("pause");
	return 0;
}

