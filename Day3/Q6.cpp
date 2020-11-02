// GCD USING WHILE LOOP AND BY USING SUBTRACTION METHOD //
//Subtracted untill both values becomes equal to find out the GCD //

#include <iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter the numbers: "<<endl;
    cin>>n1>>n2;
    while(n1!=n2)
    {
        if(n1>n2)
        n1-=n2;
        
        else
        n2-=n1;
    }
    cout<<"GCD= "<<n1<<endl;
    return 0;
}
