// cctypes.cpp -- using the ctype.h library
#include<iostream>
#include<cctype>	//prototypes for character functions
int main()
{
	using namespace std;
	cout<<"Enter text for analysis,and type @"
		" to terminate input.\n";
	char ch;
	int whitespace=0;
	int digits=0;
	int chars=0;
	int punct=0;
	int others=0;

	cin.get(ch);	//get first character
	while (ch!='@')
	{
		if(isalpha(ch))
			chars++;
		else if(isspace(ch))
			whitespace++;
		else if(isdigit(ch))
			digits++;
		else if(ispunct(ch))
			punct++;
		else
			others++;
		cin.get(ch);
	}
	cout<<chars<<" letters, "
		<<whitespace<<" whitespace, "
		<<digits<<" digits, "
		<<punct<<" punctuations, "
		<<others<<" others.\n";
	return 0;
}
