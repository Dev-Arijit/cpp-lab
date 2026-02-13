#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void rotateArray(int arr[], int k)
{
    
    int n = sizeof(arr)/sizeof(int);
    for (int i = 0; i < n; i++)
    {
        arr[((i+k)%n)] = arr[i];
    }

    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int arr[5] = {3,7,5,9,4};
    rotateArray(arr,3);   
    return 0;
}
