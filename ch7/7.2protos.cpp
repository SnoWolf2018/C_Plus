// protos.cpp -- using prototypes and function calls
#include<iostream>

void cheers(int);	//prototype:no return value
double cube(double x);	//prototype:returns a double
int main()
{
	using namespace std;
	cout<<"main() will call the simple() function:\n";
	simple();	//function call
		cout<<"main() is finished with the simple() function.\n";
	//cin.get();
	return 0;
}

//function definition
void simple()
{
	using namespace std;
	cout<<"I'm but a simple function.\n";
}
