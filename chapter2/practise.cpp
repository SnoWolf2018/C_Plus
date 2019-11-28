// Practise.cpp -- ch2 practise
#include <iostream>
void func1(int);
void func2(int);

using namespace std;
int main()
{
    int n;
    cout << "Enter the number of lines you want: ";
    cin >> n;
    func1(n);
    func2(n);
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
