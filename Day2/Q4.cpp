//Largest among three numbers using ternary operator//
#include<iostream>
using namespace std;

int main()
{
int a=10,b=20,c=30;
int largest;
largest= (a>>b && a>>c) ? a: (b>>a && b>>c) ? b : c;
cout << "Largest among three number is =" <<c;
return 0;
}
