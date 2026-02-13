# include <iostream>
using namespace std;

int main(){
    // fibonacci series
    int n ;
    cout << "Enter number of elements yo eant in the series: ";
    cin >> n;
    int a = 0,b =1;
    cout << a << " " << b << " ";
    for (int i = 2; i< n;i++){
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}