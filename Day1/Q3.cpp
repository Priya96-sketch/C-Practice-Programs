//Print number entered by the user. //

#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    int sum;
    cout<< "Enter the 1st number: ";
    cin >>num1;
    cout<<endl;
    cout << "Enter the 2nd number: ";
    cin>>num2;
    sum= num1 + num2;
    cout<<endl;
    cout<< sum << " is the Sum of the two numbers." <<endl;
    return 0;
}
