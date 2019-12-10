//practise.cpp -- practise demo
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void func1(int);
void func2(int,float,float);
void func3(float,float,float);
void func4(long);
void func5(long long,long long);
void func6();
void func7();
int main()
{
	int h=0;
	func1(h);
	
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
	
	float degrees,minutes,seconds;
	cout << "Enter a latitude in degrees,minutes,and seconds:\n";
	cout << "First ,enter the degrees:";
	cin >>degrees;
	cout << "Next ,enter the minutes of arc:";
	cin >>minutes;
	cout << "Finally ,enter the seconds of arc:";
	cin >>seconds;
	func3(degrees,minutes,seconds);

	long s;
	cout << "Enter the number of seconds: ";
	cin >> s;
	func4(s);

	long long global,us;
	cout << "Enter the world's population: ";
	cin >> global;
	cout << "Enter the population of US: ";
	cin >> us;
	func5(global,us);

	func6();

	func7();

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
void func3(float degrees,float minutes,float seconds)
{
	const float k=60;
	float latitude=0;
	latitude = degrees + minutes / k + seconds / pow(k,2);
	cout << degrees << " degrees, "
		 << minutes << " minutes, "
		 << seconds << " seconds = "
		 << latitude<< " degrees\n";

}
void func4(long s)
{
	const long dayToHours = 24.0;
	const long k = 60.0;
	long day=0.0,h=0.0,m=0.0,s0=0.0;
	s0 = s;
	day = s / pow(k,2) / dayToHours;
	h =  (s % (long) ((pow(k,2)*dayToHours)))/long (pow(k,2));	//% default sides datetype must accordence !!
	m =  (s % (long) ((pow(k,2)*dayToHours)))%long (pow(k,2))/k;
	s =  (s % (long) ((pow(k,2)*dayToHours)))%long (pow(k,2))%k;
	cout << s0 << " seconds = "
		 << day << " days,"
		 << h << " hours,"
		 << m << " minutes,"
		 << s << " seconds\n";

}
void func5(long long global,long long us)
{
	float k;
	//k = 100*us*1.0 / global;
	k = 100*(double)us / global;	// the one side of / must be double ?
	//cout << setiosflags(ios::fixed);
	//cout << setprecision(6)<< k<<endl;
	cout << "The population of the US is "
		 << k <<"%"<<" of the world population.\n";

}
void func6()
{
	float distence,fuel;
	cout << "Enter the distence: ";
	cin >> distence;
	cout << "Enter the fuel: ";
	cin >> fuel;
	double k1,k2;
	k1 = distence / fuel;
	k2 = 100 / k1;
	cout << "The mile of 1 gallon is: "
		 << k1 <<endl;
	cout << "The fuel of 100 miles is: "
		 << k2 <<endl;
}
void func7()
{
	float k1,k2;
	const float a=62.14,b=3.875;
	cout << "Enter the consume of EU style is: ";
	cin >> k1;
	k2 =   a*b/k1;
	cout << "The consume of US style is: "
		 << k2 <<endl;
}
