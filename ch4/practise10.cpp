#include<iostream>
#include<array>

int main()
{
	using namespace std;
	array<double,3> result={5.6, 5.7,5.8};
	//double *pa = &result[0];
	//for(pa=begin(result);pa !=end(result);pa++)
	//	cout<<"The result of "<<(end(result)-begin(result))
	//		<<" is: "<<(*pa+*(pa+1))/(end(result)-begin(result))<<endl;
	int i=0;
	double sum,avg;
	sum=0.0;
	avg=0.0;

	while (i<3)
	{
		sum=sum+result[i];
		avg=sum/(i+1);
		cout<<"The average result of "<<i+1<<" is: "<<avg<<endl;
		i++;
	}
}
