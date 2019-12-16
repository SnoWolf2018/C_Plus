//Review.cpp -- Review of ch4
#include <iostream>
#include <array>
#include <string>
#include <vector>

#define foo(arr) sizeof(arr)/sizeof(arr[0])
template <class T>
int getArrSize(T& arr)
{
	return sizeof(arr)/sizeof(arr[0]);
}

//template <class T>
//int getArrLength(T& arr)
//{
//	return end(arr)-begin(arr);
//}

using namespace std;
	//8
struct fish
{
	char name[20];
	float weight;
	float length;
};

int main()
{
	//1
	//char actor[30];
	//short betsie[100];
	//float chuck[13];
	//long double dipsea[64];

	//2
	array<char,30> actor;
	array<short,100> betsie;
	array<float,13> chuck;
	array<long double,64> dipsea;

	//3
	int n[5];
	n[0] = 1;
	n[1] = 3;
	n[2] = 5;
	n[3] = 7;
	n[4] = 9;

	//4
	int even;
	//even = n[0] + n[4];
	//cout << "even = " << even << endl;
	int* pi;
	pi = n;
	even = *pi + *(pi+4);
	cout << "even = " << even << endl;

	//5
	float ideas[2];
	ideas[0] = 1.0;
	ideas[1] = 2.0;
	cout << "The second element of ideas[2] = " << ideas[1] << endl;

	//6
	char num[20] = "cheeseburger";
	cout << "char num[20] = " << num << endl;

	//7
	string str1 = "Waldorf Salad";
	cout << "String str1 = " << str1 << endl;
	
	//9
	fish xueyu =
	{
		"xueyu",
		1.2,
		2.1,
	};
	cout << "xueyu.name = " << xueyu.name << endl
		 << "xueyu.weight = " << xueyu.weight << endl
		 << "xueyu.length = " << xueyu.length << endl;
	//10
	enum Response {No,Yes,Maybe};
	cout << "Yes = " << Yes<< endl;
	cout << "No = " << No<< endl;
	cout << "Maybe = " << Maybe<< endl;

	//11
	double ted = 2.0;
	double* pd = &ted;
	cout << "ted = " << *pd << endl;

	//12
	float treacle[10];
	treacle[0]=0.0;
	treacle[1]=1.0;
	treacle[2]=2.0;
	treacle[3]=3.0;
	treacle[4]=4.0;
	treacle[5]=5.0;
	treacle[6]=6.0;
	treacle[7]=7.0;
	treacle[8]=8.0;
	treacle[9]=9.9;
	//float* pf = treacle;
	float* pf = &treacle[0];
	cout << "treacle[0] = " << *pf << endl;
	cout << "treacle[9] = " << *(pf+9)<< endl;
	cout << "treacle[0] = " << pf[0] << endl;
	cout << "treacle[9] = " << pf[9]<< endl;
	
	//double treacle[10];
	//treacle[0]=0.0;
	//treacle[1]=1.0;
	//treacle[2]=2.0;
	//treacle[3]=3.0;
	//treacle[4]=4.0;
	//treacle[5]=5.0;
	//treacle[6]=6.0;
	//treacle[7]=7.0;
	//treacle[8]=8.0;
	//treacle[9]=9.0;
	////float* pf = treacle;
	//double* pf = &treacle[0];
	//cout << "treacle[0] = " << *pf << endl;
	//cout << "treacle[9] = " << *(pf+9)<< endl;
	//cout << "treacle[0] = " << pf[0] << endl;
	//cout << "treacle[9] = " << pf[9]<< endl;
	
	//13
	cout << "Enter a int number which is larger then 0: ";
	unsigned int number_array;
	cin >> number_array;
	int* pii = new int [number_array];
	vector<int> piv(number_array);

	int arrdemo[5]={5, 4, 3, 2, 1};
	for (int i=0;i<number_array;i++)
	{
		pii[i]=arrdemo[i];
		cout << pii[i]<<endl;
	}
	int shuliang=0;		
	//shuliang=end(arrdemo)-begin(arrdemo);
	//shuliang=end(pii)-begin(pii);
	for (int* p=begin(arrdemo);p !=end(arrdemo);p++)
		shuliang ++;
	cout << "shuliang = "<< shuliang<<endl;

	cout << "sizeof pii is " << sizeof(pii) << endl;
	cout << "sizeof pii is " << sizeof(pii[0]) << endl;
	cout << "length of pii is " << foo(pii) << endl;
	cout << "length of pii is " << getArrSize(pii) << endl;
	cout << "length of pii is " << sizeof(pii) / sizeof(*pii)<< endl;

	cout << "length of arrdemo is " << getArrSize(arrdemo) << endl;
	//cout << "length of arrdemo is " << getArrLength(arrdemo) << endl;
	//cout << "length of arrdemo is " << output(arrdemo) << endl;
	cout << "sizeof piv is " << sizeof(piv) << endl;
	delete [] pii;
	
	//14
	cout << (int *) "Home of the jolly bytes";
	cout << endl;

	//15
	fish * pole = new fish;
	cout << "Enter name of fish: ";
	cin >> pole->name;
	cout << "The name of new fish is: "<< pole->name<<endl;

	//17
	//#include <string>
	//#include <vector>
	//#include <array>
	//const int str_num {10};	//or =10
	//std::vector<std::string> vstr(Str_num);
	//std::array<std::string,Str_num> astr;

	return 0;
}

