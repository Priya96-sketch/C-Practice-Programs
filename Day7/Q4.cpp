/*   A 
     B B 
     C C C 
     D D D D 
     E E E E E   */



#include <iostream>
using namespace std;

int main()
{
    char input, alphabet = 'A';
    int i,j;
    cout<<"Enter the last alphabet to be printed in the row: ";
    cin>>input;
     for(i=1;i<=(input-'A'+1);i++)
     {
         for(j=1;j<=i;j++){
         cout << alphabet << " ";
     }
     ++alphabet;
      cout<<"\n";
     }
    return 0;
}
