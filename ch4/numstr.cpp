//numstr.cpp -- following number input with line input
#include <iostream>
int main()
{
	using namespace std;
	cout << "What year was your house built:\n";
	int year;
	//cin >> year;
	//cin.get();
	(cin >> year).get();
	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address,80);
	cout << "Year built:"
		 << year << endl
		 << "Address: "
		 << address << endl
		 << "Done!\n";

	
	return 0;

}

