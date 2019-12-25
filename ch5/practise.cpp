//practise.cpp -- practise for the ch5
#include<iostream>
#include<array>
#include<cstring>
#include<string>

using namespace std;
const int ArSize=16;
float interest_sigle(int);
float interest_compound(int,int);
struct car
{
	//string make;
	char make[20];
	int Proyear;

};


int main()
{
	//1
	//int n,m;
	//int sum=0;
	//cout<<"Please input two int numbers,first input the small one: ";
	//cin>>n;
	//cout<<"second,input the larger one: ";
	//cin>>m;
	////initialize;test;update
	//for (int i=n;i<=m;i++)
	//{
	//	sum=sum+i;
	//	cout<<"sum = "<<sum<<endl;
	//}
	//cout<<"Final sum = "<<sum<<endl;

	//2
	//array <long double,ArSize> factorials;
	//factorials[1]=factorials[0] = 1;
	//for (int i =2;i<ArSize;i++)
	//	factorials[i]=i * factorials[i-1];
	//for (int i =0;i<ArSize;i++)
	//	std::cout<<i<<"! = "<<factorials[i]<<std::endl;
	
	//3
	//int S=0;
	//int i_3;
	//cout<<"Please input a int number,0 to quit: ";
	//cin>>i_3;
	//int j_3=0;
	//while (j_3<=i_3)
	//{
	//	S=S+j_3;
	//	j_3++;
	//}
	//cout<<"The total number of your inputs is: "<<S<<endl;
	//for (int j=0;j<=i_3;j++)
	//{
	//	S=S+j;
	//	//cout<<"The total number of your inputs is: "<<S<<endl;
	//}
	//cout<<"The total number of your inputs is: "<<S<<endl;

	//4
	//int investment=100;
	//int year=1;
	////cout<<"Single rate is: "<<interest_sigle(investment)<<endl;
	////cout<<"Compound rate is: "<<interest_compound(investment,year)<<endl;
	//float total1=0;
	//float total2=0;
	//while (total1>=total2)
	//{
	//	total1=interest_sigle(investment)*year;
	//	total2=total2+interest_compound(investment,year);
	//	cout<<"year is: "<<year<<" , Total1 = "<<total1<<endl;
	//	cout<<"year is: "<<year<<" , Total2 = "<<total2<<endl;
	//	year++;
	//}
	//cout<<"The year of total2 > total1 is: "<<year-1<<endl;
		//while (total1>=total2)
		//{
		//	for(int i=1;i<=year;i++)
		//	{

		//		total1=interest_sigle(investment)*i;
		//		total2=total2+interest_compound(investment,i);
		//	}
		//	cout<<"year is: "<<year<<" , Total1 = "<<total1<<endl;
		//	cout<<"year is: "<<year<<" , Total2 = "<<total2<<endl;
		//	year++;
		//}
		//
	//5
	//char m[60];
	//char m[60]="January";
	const int MONTH=12;
	//const char *m[MONTH]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	//const char *m[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	const string m[MONTH]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	//int sale[MONTH];
	int Sum=0;
	//for (int i=0;i<12;i++)
	//{
	//	cout<<"Enter the month quantity of "<<m[i]<<": ";
	//	cin>>sale[i];
	//	Sum=Sum+sale[i];
	//}
	//cout<<"The total quantity of year is: "<<Sum<<endl;

	//6
	const int Year=3;
	int YearSales[3];
	int SumYears=0;
	int SumMonth=0;
	int Sales[Year][MONTH]=
	{
		{1,1,1,1,1,1,1,1,1,1,1,1},
		{2,1,1,1,1,1,1,1,1,1,1,1},
		{3,1,1,1,1,1,1,1,1,1,1,1}

	};
	for(int i=0;i<Year;i++)
	{
		int tmp=0;		//initialaze for each i
		for(int j=0;j<MONTH;j++)
		{
			//SumMonth+=Sales[i][j];
			tmp+=Sales[i][j];
		}
		//cout<<"Year of sales is: "<<SumMonth<<endl;
		//SumYears=SumMonth-SumYears;
		YearSales[i]=tmp;
		cout<<"Year of sales is: "<<YearSales[i]<<endl;
		SumYears+=YearSales[i];
	}
	cout<<"Year of sales is: "<<SumYears<<endl;

//	//7
//	int NumCars;
//	cout<<"How many cars do you wish to catolog?";
//	(cin>>NumCars).get();
//	car *ps=new car[NumCars];
//	for(int i=0;i<NumCars;i++)
//	{
//		cout<<"Car #"<<i+1<<endl;
//		cout<<"Please enter the make:\n";
//		//(cin.get(ps[i].make,20)).get();		//char input type
//		cin.getline(ps[i].make,20);				//char input type
//		//getline(cin,ps[i].make);				//string input type
//		cout<<"Please enter the year made:\n";
//		(cin>>ps[i].Proyear).get();
//		
//	}
//	cout<<"Here is your collection:\n";
//	for(int i=0;i<NumCars;i++)
//	{
//		cout<<ps[i].make<<" "<<ps[i].Proyear<<endl;
//	}
//	//int PsPointer=0;
//	//do{
//	//	cout<<ps->make<<" "<<ps->Proyear<<endl;
//	//	ps++;
//	//	PsPointer++;
//	//}while (PsPointer<NumCars);
//	delete [] ps;

//	//8
//	char w[60];
//	cout<<"Enter words (to stop,type the word done): ";
//	int SumW=0;
//	do 
//	{
//		cin>>w;
//		//(cin.get(w,60)).get();
//		//cout<<w<<endl;
//		SumW++;
//	//*pc=w;
//	}while(strcmp(w,"done"));
//	cout<<"You entered a total of "<<SumW-1<<" words.\n";

//	//IO for string & char		
//	string str;
//	char charr1[20];
//	cin.get();		//drop the enter of upline
//	cin.getline(charr1,20);
//	//cin.get();
//	//getline(cin,str);
//	cout<<"Str is: "<<str<<endl;
//	cout<<"Char is: "<<charr1<<endl;

//	//9
//	string str;
//	cout<<"Enter words (to stop,type the word done): ";
//	int SumW=0;
//	do 
//	{
//		cin>>str;
//		//(cin.get(w,60)).get();
//		//cout<<w<<endl;
//		SumW++;
//	//*pc=w;
//	}while(str!="done");
//	cout<<"You entered a total of "<<SumW-1<<" words.\n";

//	//10
//	int rows;
//	cout<<"Enter number of rows: ";
//	cin>>rows;
//	char symbol[rows][rows];
//	for(int i =0;i<rows;i++)
//	{
//		//cin.get();
//		for(int j=rows-i;j>1;j--)
//		{
//			symbol[i][j]='.';
//			cout<<symbol[i][j];
//		}
//		for(int k=0;k<=i;++k)
//		{
//			symbol[i][k]='*';
//			cout<<symbol[i][k];
//		}
//		cout<<endl;
//	}
//
	//10
	int rows;
	cout<<"Enter number of rows: ";
	cin>>rows;
	char symbol[rows][rows];
	for(int i =0;i<rows;i++)
	{
		//cin.get();
		for(int j=0;j<rows-i;j++)
		{
			symbol[i][j]='.';
			cout<<symbol[i][j];
		}
		for(int k=0;k<=i;++k)
		{
			symbol[i][k]='*';
			cout<<symbol[i][k];
		}
		cout<<endl;
	}
	return 0;
}


float interest_sigle(int investment)
{
	float rate1=0.10;
	float interest1;
	interest1=investment*rate1;
	return interest1;
}
float interest_compound(int investment,int year)
{
	float rate2=0.05;
	float interest2;
	for(int i=1;i<=year;i++)
	{
		interest2=investment*rate2;
		investment=investment+interest2;
	}
	return interest2;
}
