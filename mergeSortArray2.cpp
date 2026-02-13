#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(int arr1[], int arr2[],int m, int n){
    int i = 0, j = 0, k = 0;
    int arr3[m+n];
    while(i < m && j < n){
        if(arr1[i] <= arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i < m){
        arr3[k++] = arr1[i++];
    }
    while(j < n){
        arr3[k++] = arr2[j++];
    }

    for (int a = 0; a < m+n; a++)
    {
        cout << arr3[a] << " ";
    }
    
}
int main(int argc, char const *argv[])
{
    int arr1[5] = {1,2,4,6,7};
    int arr2[4] = {2,3,5,6};
    merge(arr1,arr2,5,4);
    return 0;
}
