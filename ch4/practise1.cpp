#include <iostream>
#include <string>

const int Asize = 20;
using namespace std;

struct student
{
	char firstName[Asize];
	char lastName[Asize];
	char grade;
	int age;
};
void display(student);


int main()
{
	student snow;
	cout<<"What is your first name? ";
	cin.getline(snow.firstName,Asize);
	cout<<"What is your last name? ";
	cin.getline(snow.lastName,Asize);
	cout<<"What letter grad do you deserve: ";
	cin>>snow.grade;
	cout<<"What is your age? ";
	cin>>snow.age;
	display(snow);
	return 0;
}

void display(student name)
{
	
	cout<<"Name: "<<name.firstName<<" ," <<name.lastName<<endl
		<<"Grade: "<<char (name.grade+1)<<endl
		<<"Age: "<<name.age<<endl;
}
