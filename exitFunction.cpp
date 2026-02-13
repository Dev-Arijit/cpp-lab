#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    while (1){
        switch(num){
            case 1: cout << "it is one" << endl;
            case 2: cout << "It is two"<< endl;
            case 0: cout << "Exiting the loop" << endl;
                    exit(0);
            default: cout <<"This is default case" << endl;
        }
    }
    return 0;
}
