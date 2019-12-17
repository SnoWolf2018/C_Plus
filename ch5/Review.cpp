//Review 
#include<iostream>

int main()
{
	using namespace std;
	//1
	//入口条件循环先判断条件，条件符合开始循环，否则不循环
	//出口条件循环先循环，后判断循环结束条件，条件符合则结束，不符合不结束
	//for while 属于入口条件循环，do while属于出口条件循环
	
	//2
	int i;
	for (i=0;i<5;i++)
		cout<<i<<endl;

	//3
	int j;
	for (j=0;j<11;j+=3)
		cout<<j;
	cout<<endl<<j<<endl;

	//4
	int jj=5;
	while (++jj<9)
		cout<<jj++<<endl;

	//5
	int k=8;
	do
		cout<<"k = "<<k<<endl;
	while (k++<5);

	//6
	int sum=1;
	for (i=0;i<7;i++)
	{
		cout<<sum<<endl;
		sum =2*sum;
	}

	//7
	//使用{}在循环体中包含多条语句
	
	//8
	//int x = {1,024};
	int y;
	y=1,024;
	cout<<y<<endl;

	//9
	//cin>>ch将跳过空格、换行符和制表符，
	//cin.get(ch) & ch=cin.get()没有这个问题
	
	return 0;
}
