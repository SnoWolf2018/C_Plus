//textin2.cpp --using cin.get(char)
#include<iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;		//use basic input
	cout<<"Enter characters;enter # to quit: \n";
	cin.get(ch);		//use the cin.get(ch) function
	while (ch !='#')
	{
		cout<<ch;		//echo the character
		++count;		//count the character
		cin.get(ch);	//get the next character
	}
	cout<<endl<<count<<" characters read\n";
	return 0;
}


