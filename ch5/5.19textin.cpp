//textin3.cpp --using cin.get(char)
#include<iostream>
int main()
{
	using namespace std;
	int ch;				//shuld be int not char
	int count = 0;		//use basic input
	cout<<"Enter characters;enter # to quit: \n";
	while ((ch = cin.get())!=EOF)		//test for EOF
	{
		cout.put(char(ch));
		++count;		//count the character
	}
	cout<<endl<<count<<" characters read\n";
	return 0;
}


