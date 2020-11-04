// PRIME NUMBER PRINTING BETWEEN TWO INTERVALS //

#include <iostream>
using namespace std;

int main() {
    int i, low,high;
    bool isPrime = true;

    cout << "Enter the low and high ";
    cin >> low>>high;
    
    while(low<high){
    isPrime=true;

    // 0 and 1 are not prime numbers
    if (low== 0 || low == 1) {
        isPrime = false;
    }
    else {
        for (i = 2; i <= low/ 2; ++i) {
            if (low % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << low << "  ";
        ++low;
    }
    return 0;
}
