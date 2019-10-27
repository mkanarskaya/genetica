#include "Two_degree.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

Two_degree::Two_degree(vector <double> newkoef) : Lin_equation(2, newkoef) {
	try {
		if (newkoef.size() != 3)
		{
			cout << newkoef.size();
			throw "It is not a square equation";
		}
		if (newkoef[2] == 0)
		{
			throw "It is not a square equation of 2 degree";
		}
		koef = newkoef;
	}
	catch (string str) {
		cerr << str << endl;
	}

}

vector <double> Two_degree::solve() {
	double x_1, x_2;
	double discriminant = koef[1] * koef[1] - 4 * koef[0] * koef[2];
	if (discriminant < 0) return { NULL, NULL};
	else {
		if (discriminant == 0) return { -koef[1] / (2 * koef[0]) , NULL };
		else {
			x_1 = (-koef[1] + sqrt(discriminant)) / (2 * koef[0]);
			x_2 = (-koef[1] - sqrt(discriminant)) / (2 * koef[0]);
			return { x_1, x_2 };
		}
	}
}

bool isEmpty1(vector<double> arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] != NULL) return false;
	}
	return true;
}

void Two_degree::printSolve() {
	vector <double> buf = solve();
	if (!isEmpty1(buf)) {
		for (int i = 0; i < buf.size(); i++) {
			if (buf[i] != NULL) cout << buf[i] << " ";
		}
		cout << "Solve equation: ";
	}
	else
	{
		cout << "No solve equation:";
	}
	cout << koef[0];
	for (int i = 1; i < koef.size(); i++) {
		cout << " + " << koef[i] << "x^" << i;
	}
	cout << " This function is ";
	if (isEven()) cout << "even";
	if (isUneven()) cout << "uneven";
	if (isCommon()) cout << "common";
	cout << endl;
};


