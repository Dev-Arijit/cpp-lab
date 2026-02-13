#include<iostream>
using namespace std;

int getSum(int *arr,int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }

    return sum;
}

int main(){
    int n;
    cin >> n;

    int *i = new int;
    int *arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr,n);
    cout << ans << endl;

    delete i;
    delete []arr;

    for(int i = 0; i < n; i++){
        cout << arr[i];
    }


}