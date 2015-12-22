#pragma once
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

void print1();
void print2();
extern int exampleVariable1;
extern int exampleVariable2;

void multiplyByIteration(int input);

class staticBearSample {
private:
	static const int LimbCount = 4;		//can init const static integral-type variable here or outside class definition
	const string name;
public:
	staticBearSample(string name) : name{ name } {
		//this->name = name;		use initializer list for const
		cout << LimbCount << endl;
	}

	static void printLimbs() {
		cout << "LimbCount: " << staticBearSample::LimbCount << endl;	//refer to #3																		//cout << name << endl;											can't do, refer to #4
	}
	static void printName(staticBearSample* sample) {
		cout << "name: " << sample->name << endl;	//can do, refer to #4
	}
};