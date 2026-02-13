#include<iostream>
using namespace std;

void reverse (int arr[], int n){
    for(int i = 0; i<=n/2 ; i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    for(int i = 0; i <n; i++){
        cout << arr[i] ;
    }
}
int main(int argc, char const *argv[])
{
    cout << "Enter the number of elemnts of the array ";
    int n;
    cin >> n;
    cout << "Enter the elements in the array ";
    int test[n];
    for (int i = 0; i < n; i++)
    {
        cin >> test[i];
    }
    reverse(test,n);
    return 0;
}
