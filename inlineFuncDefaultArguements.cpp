#include<iostream>
using namespace std;

inline int getMax(int a, int b){
    return (a>b)?a:b;                           // inline works on only function having max 2-3 line body 
}

void print(int arr[], int n, int start = 0){     // default arguments 
    for(int i = start; i<n; i++){
        cout << arr[i] << endl; ;
    }
}
int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 10;
    int max = getMax(a,b);
    cout << max << endl;
    a = a+ 8;
    b = b + 1;
    max = getMax(a,b);
    cout << max << endl;
    
    int arr[5] = {1,2,4,6,7};
    int size = 5;
    print(arr,size);
    return 0;
}
