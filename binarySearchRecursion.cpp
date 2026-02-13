#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k){
    if(s>e)
       return false;

    int mid = s + (e-s)/2;

    if(arr[mid] == k){
        return true ;
    }
    else if(arr[mid] > k){
        return binarySearch(arr,s,mid-1,k);
    }
    else{
        return binarySearch(arr,mid+1,e,k);
    }
}
int main(int argc, char const *argv[])
{
    int arr[5] = {2,3,6,8,9};
    if(binarySearch(arr,0,4,6)){
        cout << "Key is present " << endl;
    }
    else{
        cout << "Key is not present " << endl;

    }
    return 0;
}
