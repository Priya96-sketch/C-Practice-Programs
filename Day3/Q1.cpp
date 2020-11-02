//Calculate sum of Natural numbers//

#include<iostream>
using namespace std;

int main()
{
int num,i,sum=0;
cin>>num;
for(i=1;i<=num;i++)
{
sum+=i;
}
cout<<"Sum= "<<sum;
return 0;
}
