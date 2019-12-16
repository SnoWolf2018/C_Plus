#include <iostream>
//#include <cstring>
#include <string>

using namespace std;
struct CandyBar
{
	string kind;
	float weight;
	int calorie;
};
struct student
{
	string firstName;
	string lastName;

};

void display(student);
int main()
{
	//student snow;
	//cout<<"Enter your first name: ";
	//getline(cin,snow.firstName);
	//cout<<"Enter your last name: ";
	//getline(cin,snow.lastName);
	//display(snow);

	CandyBar snack
	{
		 "Mocha Munch",
		 2.3,
		 350,
	};
	cout<<"Snack kind: "<<snack.kind<<endl
		<<"Snack weight: "<<snack.weight<<endl
		<<"Snack calorie: "<<snack.calorie<<endl;

return 0;
}
void display(student name)
{
	cout<<"Here's the information in a single string: "<<name.firstName<<" , "<<name.lastName<<endl;
}
