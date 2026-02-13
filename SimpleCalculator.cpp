#include <iostream>
using namespace std;

int main(){
    int a, b;
    char op;
    cout << "Enter the first number " << endl;
    cin >> a;
    cout << "Enter the operation " << endl;
    cin >> op;
    cout << "Enter the second number "<< endl;
    cin >> b;

    switch (op){
        case '+' : cout << a+b << endl;
                   break;

        case '-' : cout << a-b << endl;
                   break;
        case '*' : cout << a*b << endl;
                   break;
        case '/' : cout << a/b << endl;
                   break;
        case '%' : cout << a%b << endl;
                   break;
        default : cout << "Enter a valid operaton";
    }
}