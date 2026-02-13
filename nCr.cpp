#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int ans = (factorial(n))/(factorial(r)*factorial(n-r));
    return ans;
}

int main(){
    cout << "Enter two numbers " << endl;
    int a, b;
    cin >> a >> b;
    cout << "nCr = " << nCr(a,b) << endl;

}