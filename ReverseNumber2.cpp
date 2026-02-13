#include <iostream>
using namespace std;

int main(){
    cout << "Enter the number " << endl;
    int n,rem,rev = 0 ;
    cin >> n;
    while (n != 0){
        rem = n%10;
        if (rev > INT32_MAX || rev < INT32_MIN){
            return 0;
        }
        rev = (rev * 10) + rem;
        n /= 10;
    }
    cout << "The reverse of the number is " << rev << endl;
}
