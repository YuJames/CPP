#include <iostream>	 
#include <string>
using namespace std;

//*****Nested Classes*****//

//#include "nestedClasses.h"
//int main() {
//	string name = "Bob";
//	character* Bob = new character(name);
//	cout << "Character's name is " << Bob->getName() << endl;	   //why do i have to include <string> for cout to work?
//	cout << "Character's race is " << Bob->getType() << endl;
//}

//*****Nested Classes*****//



//*****Static Keyword*****//

#include "static.h"
int main() {
	//***#1***//
	print1();
	//print2();		can't do, internal linkage

	//***#2***//
	cout << "exampleVariable1 = " << exampleVariable1 << " : static.cpp non-static variable accessible" << endl;
	//cout << exampleVariable2 << endl;		can't do, internal linkage

	//***#3***//
	for (int a = 3; a >= 0; a -= 1) {
		multiplyByIteration(a);
	}

	//***#4-5***//
	staticBearSample* polarBear = new staticBearSample("fred");
	staticBearSample::printLimbs();
	staticBearSample::printName(polarBear);

}

//*****Static Keyword*****//


