#include<iostream> 
using namespace std; 

int getSum(int arr[],int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return arr[0];
    }
    int remainingPart = getSum(arr+1,n-1);
    int sum = arr[0] + remainingPart;
    return sum;
    

}
int main(int argc, char const *argv[])
{
    int arr[5];
    for(int i = 0; i<5;i++){
        cin >> arr[i];
    }
    cout << getSum(arr,5);
    return 0;
}
