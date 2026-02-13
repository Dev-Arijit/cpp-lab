#include<iostream>
using namespace std;

void sort(int arr[], int n){
    for(int i = 0 ;i<n-1;i++){
        int min = arr[i];
        for(int j = i+1; j<n; j++){
            if(arr[j] < min){
                min = arr[j];
            }
        }
        swap(arr[i],min);
    }
    for(int i = 0; i <n; i++){
        cout << arr[i] << " " ;
    }
}

int main(){
    int arr[5] = {2,4,6,8,10};
    sort(arr,5);
}