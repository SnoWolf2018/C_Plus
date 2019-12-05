//hexoct2.cpp --display values in hex and octal
#include <iostream>
int main()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;
	int hexnum = 66;
	int octalnum = 34;

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (decimal for 42) \n";
	cout << hex;	//manipulator for changing number base
	cout << "waist = " << waist  << " (hexadecimal for 42)\n";
	cout << "hexnum = " << hexnum  << " (hexadecimal for 66)\n";
	cout << oct;
	cout << "inseam = " << inseam  << " (octal for 42)\n";
	cout << "octalnum = " << octalnum  << " (octal for 34)\n";
	return 0;

}
