#include<iostream>
using namespace std;

bool linearSearch(int *arr, int n,int key){
    if(arr[0] == key){
        return true;
    }
    if(n == 0){
        return false;
    }
    bool ans = linearSearch(arr+1,n-1,key);
    return ans;
}
int main(int argc, char const *argv[])
{
    int arr[5] = {2,3,6,8,9};
    if(linearSearch(arr,5,4)){
        cout << "Key is present " << endl;
    }
    else{
        cout << "Key is not present " << endl;

    }
    return 0;
}
