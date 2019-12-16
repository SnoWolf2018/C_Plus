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
//struct student
//{
//	string firstName;
//	string lastName;
//
//};

//void display(student);

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

	//CandyBar snacks[3];
	CandyBar snacks[3]
	{
		{"M 1",2.4,360},
		{"M 2",2.5,370},
		{"M 3",2.6,380},
	};
	for(int i=0;i<3;i++)
	{
		cout<<endl;
		cout<<snacks[i].kind<<endl;
		cout<<snacks[i].weight<<endl;
		cout<<snacks[i].calorie<<endl;
	}

	//strcpy(snacks[0],snack);
	//snacks[0]=snack;
	////snacks[0]=snacks[1]=snacks[2]=snack;
	////cout<<snacks[0].kind<<snacks[2].kind<<snacks[3].kind;
	//cout<<snacks[0].kind<<endl;
	//cout<<snacks[1].kind<<endl;
	//cout<<snacks[2].kind<<endl;

return 0;
}
//void display(student name)
//{
//	cout<<"Here's the information in a single string: "<<name.firstName<<" , "<<name.lastName<<endl;
//}
