// Practise.cpp -- ch2 practise
#include <iostream>
void func1(int);
void func2(int);
int func3(int);
void func4(int);
void func5(float);
void func6(int n,int m);

using namespace std;
int main()
{
    int n,age,Celsius,F;
    float y;
    int h,m;
    cout << "Enter the number of lines you want: ";
    cin >> n;
    func1(n);
    func2(n);

    cout << "Enter your age: " ;
    cin >> age;
    cout << "Enter your age: " << age << endl;

    cout << "Please enter a Celsius value: " ;
    cin >> Celsius;
    func3(Celsius);
    func4(Celsius);

    // Test return number of func3()
    cout << endl;
    F = func3(Celsius);
    cout << endl << F <<endl;


    cout << "Enter the number of light years: ";
    cin >> y;
    func5(y);

    cout << "Enter the number of hours: ";
    cin >> h;
    //cout << h << endl;
    cout << "Enter the number of minutes: ";
    cin >> m;
    //cout << m <<endl;
    func6(h,m);

    return 0;
}

void func1(int n)
{
    for(int i=0;i<n;i++)
    {
    cout << "11" << endl;
    }
}

void func2(int n)
{
    for(int i=0;i<n;i++)
    {
    cout << "22" << endl;
    }
}

int func3(int Celsius)
{
    float Fahrenheit=0;
    Fahrenheit= 1.8*Celsius + 32.0;
    cout << Celsius << " degrees Celsius is " << Fahrenheit <<" degrees Fhrenheit.\n";
    return Fahrenheit;
    //return 0;
}

void func4(int Celsius)
{
    float Fahrenheit=0;
    Fahrenheit= 1.8*Celsius + 32.0;
    cout << Celsius 
         << " degrees Celsius is " 
         << Fahrenheit 
         <<" degrees Fhrenheit.\n";
}
void func5(float y)
{
    float astr = 0;
    astr = 63240 * y;
    cout << y 
         << " light years = "
         << astr 
         << " astronomical units. " << endl;
}
void func6(int x,int y)
{
    cout << "Time: " << x <<":" << y <<endl;
}
