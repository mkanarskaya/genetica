#include "One_degree.h"
#include <iostream>
#include <string>

using namespace std;

One_degree::One_degree(vector <double> newkoef): Lin_equation(1, newkoef){
	try{
		if (newkoef.size() != 2)
		{
			throw "It is not a linear equation";
		}
		if (newkoef[1] == 0)
		{
			throw "It is not a linear equation of 1 degree";
		}
		koef = newkoef;
	}
	catch(string str){
		cerr << str << endl;
	}
}

vector <double> One_degree::solve() {
	return { -koef[0] / koef[1] };
}

bool isEmpty(vector<double> arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] != NULL) return false;
	}
	return true;
}

void One_degree::printSolve() {
	vector <double> buf = solve();
	if (!isEmpty(buf)){
		for (int i = 0; i < buf.size(); i++) {
			if (buf[i] != NULL) cout << buf[i] << " ";
		}
		cout << "Solve equation: ";
	}else
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
