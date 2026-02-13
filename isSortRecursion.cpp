#include<iostream>
using namespace std;

bool isSort(int arr[],int n){
    if(n == 0 || n == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remaining = isSort(arr+1,n-1);
        return remaining; 
    }

}
int main(int argc, char const *argv[])
{
    int arr[5] = {2,4,4,4,8};
    bool ans = isSort(arr,5);
    if(ans){
        cout << "The array is sorted " << endl;
    }
    else{
        cout << "The array is not sorted " << endl;

    }
    return 0;
}
