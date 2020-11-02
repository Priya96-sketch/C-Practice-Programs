// LCM using GCD //
// FORMULA = (n1 * n2)/ gcd //

#include <iostream>
using namespace std;

int main()
{
    int n1,n2,hcf,lcm,i,gcd;
    cout<<"Enter the numbers: "<<endl;
    cin>>n1>>n2;
    
    if(n2>n1)
    {
        int temp=n2;
        n2=n1;
        n1=temp;
    }
    
    for(i=1;i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0){
     gcd=i;
        }
    }
    
    lcm=(n1*n2)/gcd;
    cout<<"LCM= "<<lcm;
    
    return 0;
    
}
