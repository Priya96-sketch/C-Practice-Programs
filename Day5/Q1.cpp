// PRIME NUMBER CHECK //
#include <iostream>
using namespace std;

int main() {
    int num,i;
    bool isPrime=true;
    
    cout<<"Enter the number: ";
    cin>>num;
    
    //0 and 1 are not Prime Numbers//
if(num==0 || num==1){
    isPrime=false;
}
    
    
else{
    for(i=2; i<=num/2 ;++i)
    {
        if(num%i==0){
        isPrime=false;
        break;
        }
    }
}
    if (isPrime)
     cout<<num<<"is Prime no.";
    else
     cout<<num<<"is Not a prime no. ";
	
	return 0;
}
