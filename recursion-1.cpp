#include <iostream>
using namespace std;

int pow2 (int n){
    if(n == 0){
        return 1 ;
    }

    return 2*pow2(n-1);
}

int print1(int n){
    if (n == 0){
        return 0 ;
    }
    cout << n << " ";
    print1(n-1);                                // tail recursion
}

int print2(int n){
    if (n == 0){
        return 0 ;
    }
    print2(n-1);                                // head recursion
    cout << n << " ";
}
int main(int argc, char const *argv[])
{
    int n;
   /* cout << "Enter the power of 2 " ;
    cin >> n;
    int ans = pow2(n);
    cout << "answer = " << ans << endl;   */

    cout << "enter number to print " << endl;
    cin >> n;
    print1(n);
    cout << endl;
    print2(n);
    return 0;
}
