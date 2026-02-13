#include<iostream>
using namespace std;

int main(){
    cout <<"Enter the number in binary: ";
    uint32_t n;
    cin >> n;
    int count = 0;
    while(n != 0){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    cout << "Number of one bits: " << count ;
}