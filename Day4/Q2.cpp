// CALCULATING THE POWER OF A NUMBER //
#include <iostream>
using namespace std;

int main() {
int base, exponent;
int result=1;
cout<<"Enter the exponent and base: ";
cin>>base>>exponent;
cout<<endl;
while(exponent!=0)
{
    result*=base;
    --exponent;
}
cout<<"Result= "<<result;
	return 0;
}
