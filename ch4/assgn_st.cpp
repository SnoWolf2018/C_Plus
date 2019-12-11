//assgn_st.cpp -- assigning structures
#include <iostream>
struct inflatable	//structure declaration
{
	char name[20];
	float volume;
	double price;
};
int main()
{

	using namespace std;
	inflatable bouquet =
	{
		"sunflowers",	//name value
		0.20,			//volume value
		12.49			//price value
	};	//guest is a structure variable of type inflatable
		//It's initialized to the indicated values
	inflatable choice; 
	cout << "bouquet: " << bouquet.name << " for $" << bouquet.price << endl;

	choice = bouquet;	//assign one structure to another
	cout << "choice: " << choice.name << " for $" << choice.price << endl;
	return 0;

}

