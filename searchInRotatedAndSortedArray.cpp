#include<iostream>
using namespace std;

int pivot(int arr[],int n){
    int s= 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else {
            e = mid;

        }
        mid = s + (e-s)/2;
    }
    return s;
}

int element(int arr[],int n, int k){
    int s = 0;
    int e = n-1;
    int p = pivot(arr,n);
    if(k >= arr[0]){
        e = p-1;
    }
    else{
        s = p;
    }
    int mid = s + (e-s)/2;
    while(s<=e){
        if(k == arr[mid]){
            return mid;
        }
        else if(k < arr[mid]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}
int main(){
    int array[5] =  {12, 15, 18, 2, 4};
    cout<< pivot(array,5)<< endl;
    cout << element(array,5,18);
}