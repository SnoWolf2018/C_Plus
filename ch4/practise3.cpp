#include <iostream>
#include <cstring>

const int Asize=20;
using namespace std;
struct student
{
	char firstName[Asize];
	char lastName[Asize];

};

void display(student);
int main()
{
	student snow;
	cout<<"Enter your first name: ";
	cin.getline(snow.firstName,Asize);
	cout<<"Enter your last name: ";
	cin.getline(snow.lastName,Asize);
	display(snow);


return 0;
}
void display(student name)
{
	cout<<"Here's the information in a single string: "<<name.firstName<<" , "<<name.lastName<<endl;
}
