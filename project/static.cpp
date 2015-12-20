//  static duration = allocated at start, deallocated at end (of program)
//	1. static variable/function at file(global) scope = internal linkage
//  2. local static variable in function retains value between calls
//  3. static class data member belongs to class (not object)
//	4. static class function belongs to class (not object); to access instance member have instance pointer/reference parameter, otherwise can only access static member variables
//	5. ~union stuff~
#include <iostream>
#include <string>
using namespace std;

void print1() {
	cout << "print1: by default, external linkage" << endl;		//external linkage
}
static void print2() {
	cout << "print2: 'static' = internal linkage" << endl;		//internal linkage, refer to #1
}
int exampleVariable1 = 17;			//external linkage
static int exampleVarialbe2 = 28;	//internal linkage, refer to #1

void multiplyByIteration(int input) {	//refer to #2
	static int iteration;
	iteration += 1;
	cout << "iteration :" << iteration << " , " << "input :" << input << " , " << "output: " << input * iteration << endl;
}