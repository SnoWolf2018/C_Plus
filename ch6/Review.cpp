//Review for ch6

//1
//version2 is efficient than version1,if else will skips the newline test

//2
#include<iostream>
using namespace std;
int main(){
	char ch;
	int ct1,ct2;

	ct1=ct2=0;
	while((ch=cin.get())!='$')
	{
		cout<<ch;
		ct1++;
		if(ch='$')
			ct2++;
		cout<<ch;
	}
	cout<<"ct1 = "<<ct1<<",ct2 = "<<ct2<<endl;
	return 0;
}
