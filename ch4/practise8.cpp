#include <iostream>
#include <string>

using namespace std;
struct pizza
{
	string company;
	double diameter;
	double weight;
};

int main()
{
	pizza * ps = new pizza;
	cout<<"Enter the diameter of pizza: ";
	//cin>>(*ps).diameter;
	cin>>ps->diameter;
	cout<<"Enter the company of pizza: ";
	cin>>ps->company;
	cout<<"Enter the weight of pizza: ";
	cin>>(*ps).weight;
	//cin>>ps->weight;
	cout<<"Company: "<<ps->company<<endl
		<<"Diameter: "<<(*ps).diameter<<endl
		<<"Weiget: "<<(*ps).weight
		<<endl;
	delete ps;	//new delete must be a pair!!
}
