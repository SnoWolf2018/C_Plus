//instr3.cpp -- reading more than one word with get() & get()
#include <iostream>
int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];	//empty array
	char dessert[ArSize];
	
	cout << "Enter your name:\n";
	cin.get(name,ArSize).get();	//reads through newline
	cout << "Enter your favorite dessert:\n";
	cin.get(dessert,ArSize);	//reads through newline
	cout << "I have some delicious "
		 << dessert
		 << " for you, "
		 << name
		 << ".\n";

	
	return 0;

}

