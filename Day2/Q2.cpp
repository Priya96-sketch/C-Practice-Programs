//FINDING THE ASCII VALUE OF A CHARACTER//
//ASCII value means every character from A-Z and a-z has a numeric value which computer takes//

#include <iostream>
using namespace std;

int main() {
	char ch;
	cout<<"Enter the character whose ASCII value is to be printed: "<<endl;
    cin>>ch;
	cout<<"ASCII value of the character is: "<<int(ch);   //typecasting
	return 0;
}
