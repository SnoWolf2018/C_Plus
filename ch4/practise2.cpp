#include <iostream>
#include <string>

using namespace std;

struct student
{
	string firstName;
	string lastName;
	char grade;
	int age;
};
void display(student);


int main()
{
	student snow;
	cout<<"What is your first name? ";
	//cin>>snow.firstName;
	getline(cin,snow.firstName);
	cout<<"What is your last name? ";
	getline(cin,snow.lastName);
	//cin>>snow.lastName;
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
