#include <iostream>
using namespace std;

int main(){
    cout << "Enter your number: ";
    int n ;
    cin >> n;
    int rev = 0;
    while(n != 0){
        int digit = n % 10;
        if ( (rev > INT32_MAX/10) || (rev < INT32_MIN/10)){
            return 0;
        }
        rev = (rev * 10) + digit;
        n /= 10;
    }
    cout << rev;
}