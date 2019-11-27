// getinfo.cpp --input and output
#include <iostream>
int main()
{
    using namespace std;
    int carrots;
    carrots = 25;
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more." ;
    carrots = carrots + 2;
    //cout << "Now you have " <<  carrots  << " carrots." <<endl;
    //Long codes short style
    cout << "Now you have " 
         <<  carrots  
         << " carrots." 
         <<endl;
    return 0;
}
