//Calculate the Quotient and Remainder. //

#include<iostream>
using namespace std;

int main()
{
    int num, divisor;
    cout<<"Enter dividend or the number: ";
    cin>>num;
    cout<<endl;
    
    cout<<"Enter divisor: ";
    cin>>divisor;
    cout<<endl;
    
    int quotient, rem;
    quotient=num/divisor;
    rem= num%divisor;
    cout<<"Quotient= "<<quotient<<endl;
    cout<< "Remainder= "<<rem;
    return 0;
}
