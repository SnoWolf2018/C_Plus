//practise.cpp -- practise demo
#include <iostream>
#include <cmath>
using namespace std;
void func1(int);
void func2(int,float,float);
int main()
{
	int h;
	//func1(h);
	int inch;
	float ft,weight;
	
	cout << "Enter your hight in ft,inch:\n"; 
	cout << "First,enter the ft:_\b";
	cin >> ft;
	cout << "second,enter the inch:__\b\b";
	cin >> inch;
	cout << "Enter your weight:___pounds.\b\b\b\b\b\b\b\b\b\b" ;
	cin >> weight;
	func2(inch,ft,weight);
	return 0;
}
void func1(int h)
{
	float H;
	const float k = 12.0f;
	//const float k = 12.0;
	cout << "Enter your height in inch:___\b\b\b";
	cin >> h;
	H = float (h) / k;
	cout << "Your height in inch is: " << h << endl;
	cout << "Your height in ft is: " << H << endl;
}
void func2(int inch,float ft,float weight)
{
	const float ft_to_inch = 12.0f;
	const float inch_to_meter = 0.0254f;
	const float kg_to_pound = 2.2f;
	float height,BMI;
	height = (ft * ft_to_inch + inch) * inch_to_meter;
	weight = weight/ kg_to_pound;
	//BMI = weight / (height*height);
	BMI = weight / pow(height,2);
	cout << "Your height is:"<<height<< "meters.\n";
	cout << "Your weight is:"<<weight << "kg.\n";
	cout << "Your BMI is:"<< BMI <<endl; 
}
