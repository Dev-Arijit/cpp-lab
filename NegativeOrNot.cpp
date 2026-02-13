#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "Enter the number: ";
    int n;
    cin >> n;
    int i = 0;
    long long com = 0;
    while(i<32){
        int bit = ~n;
        com = (bit *  pow(10,i)) + com;
        n = n >> 1;
        i++;

    }
    cout << com;

}