// FINDING FACTORS OF A NUMBER //

#include <iostream>
using namespace std;

int main() {
int num,i;
int res;
cin>>num;
for(i=1; i<=num; ++i)
{
    res=num%i;
    if(res==0)
    cout<<i<<endl;
}
	return 0;
}
