//Swap two numbers without using a 3rd variable//
#include <iostream>
using namespace std;

int main() {
	int a=5,b=6;
	cout<<"a=5 and b=6"<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After swapping values of a and b are:"<<a<<" & "<<b;
	return 0;
}
