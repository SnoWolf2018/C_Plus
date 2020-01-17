// secref.cpp -- defining and using a reference
#include <iostream>

int main()
{
	using namespace std;
	int rats=101;
	int & rodents=rats;		//rodents is a reference

	cout<<"rats= "<<rats
		<<", rodents= "<<rodents<<endl;

	cout<<"rats address = "<<&rats
		<<", rodents address = "<<&rodents<<endl;
	int bunnies=50;
	rodents=bunnies;		// can we change the reference?
	cout<<"bunnies= "<<bunnies
		<<", rats= "<<rats
		<<", rodents= "<<rodents<<endl;

	cout<<"bunnies address = "<<&bunnies
		<<", rodents address = "<<&rodents<<endl;
	return 0;
}
