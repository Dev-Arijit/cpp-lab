# include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int sum = 0;
    int prd = 1;
    while(n != 0){
        int rem = n % 10 ;
        prd *= rem;
        sum += rem;

        n /= 10;
    }
    cout << "Difference between the product and the sum of the digits of a number is " << (prd - sum) << endl;
}