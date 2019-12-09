//practise.cpp -- practise demo
#include <iostream>
using namespace std;
void func1(int);
int main()
{
	int h;
	func1(h);

}
void func1(int h)
{
	int H;
	const int k = 10;
	cout << "Enter your height(inch):____" << endl;
	cin >> h;
	H = h / k;
	cout << "Your height(inch) is: " << h << endl;
	cout << "Your height(in) is: " << H << endl;
}
