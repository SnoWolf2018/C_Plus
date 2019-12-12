//init_ptr.cpp -- initialize a pointer
#include <iostream>
int main()
{

	using namespace std;
	int higgens = 5;	//declare a variable
	int* pt = &higgens;		

	//express values two ways
	cout << "Value of higgens = " << higgens
	     << ";Adress of higgens =  " << &higgens<< endl;
	cout << "Value of *pt = " << *pt
	     << ";Adress of pt =  " << pt<< endl;

	return 0;

}

