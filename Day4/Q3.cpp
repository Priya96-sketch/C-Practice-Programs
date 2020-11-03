//PALLINDROME NUMBER//
#include <iostream>
using namespace std;

int main() {
    int num, rev=0;
    int rem;
    int temp;
    
    cout<<"Enter the number: ";
    cin>>num;
    
    temp=num;
    
    while(num!=0){
    rem=num%10;
    rev=rev*10+rem;
    num/=10;
        
    }
    if(rev==temp){
    cout<<"Pallindrome no."<<endl;}
    else if(rev!=temp){
    cout<<"Not a Pallindrome no."<<endl;}
	
	return 0;
}
