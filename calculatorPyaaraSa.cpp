#include <iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cout << "Enter number then operation then number" <<endl;
    cin >>a >> ch >> b;
    switch(ch){
        case '+': cout << a << ch << b << " = " << a+b << endl;
                  break;
        case '-': cout << a << ch << b << " = " << a-b << endl;
                  break;
        case '*': cout << a << ch << b << " = " << a*b << endl;
                  break;
        case '/': cout << a << ch << b << " = " << a/b << endl;
                  break;
        default: cout << "Invali operation" << endl;
    }
}