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

	CandyBar * pa = new CandyBar;
	cout<<"Please input snacks kind,weight,calorie: \n";
	//cin>>pa->kind;  //cin function can't input backspace between strings
	getline(cin,pa->kind);
	cin>>pa->weight;
	cin>>pa->calorie;

	cout<<"Snacks kind: "<<pa->kind<<endl
		<<"Snacks weight: "<<pa->weight<<endl
		<<"Snacks calorie: "<<pa->calorie<<endl;
	delete pa;	//new delete must be a pair!!


return 0;
}
