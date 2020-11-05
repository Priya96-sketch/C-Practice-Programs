// ARMSTRONG NUMBER //
// CONCEPT -- Number = Cube of the individual digits. Ex- 153= 1^3 + 5^3 + 3^3 //
#include <iostream>
using namespace std;

int main() {
int num,i,rem,res=0;
cout<<"Enter the three digit number: ";
cin>>num;
int temp =num;
while(num!=0)
{
 rem = num%10;
 res += rem*rem*rem;
 num/=10;
    
}
if(res==temp)
{
    cout<<"Armstrong no.";
}
else
{
    cout<<"Not an Armstrong no.";
}
	return 0;
}
