// REVERSE OF A NUMBER //
#include <iostream>
using namespace std;

int main() {
	int num;
		int rev=0;
	cout<<"Enter the number to be reversed: ";
	cin>>num;
	
	while(num!=0){
	int rem=num%10;
	rev=rev*10+rem;
	num/=10;
	}
	cout<<"Reversed number= "<<rev;
	return 0;
}
