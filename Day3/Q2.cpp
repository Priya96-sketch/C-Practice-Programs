// PROGRAM TO CHECK LEAP YEAR //
#include <iostream>
using namespace std;

int main()
{
    int yr;
    int i;
    cout<<"Enter the year: "<<endl;
    cin>>yr;
    if(yr%4==0)
    {
        if(yr%100==0)
        {
            if(yr%400==0)
                cout<<"Leap Year "<<endl;
            else
                cout<<"Not a leap-year"<<endl;
        }
        else
        cout<<"Leap-year"<<endl;
    }
    else
    cout<<"Not a leap-year";

    return 0;
}
