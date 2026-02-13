#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int row, int col, int target){
    for(int i = 0; i<row; i++){
        for (int j = 0; j < col; j++){
            // cout << arr[i][j] << " ";
            if(arr[i][j] == target){
                return 1;
            }
        }
        
        
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int arr[3][4];
    cout << "Enter the elements in the array ";
    for(int i = 0; i<3; i++){
        for(int j=0; j<4;j++){
            cin >> arr[i][j];
        }
    }
    cout << "Enter the target element " << endl;
    int target ;
    cin >> target ;
    if(isPresent(arr,3,4,target)){
        cout << "The number is present "<< endl;
    }
    else{
        cout << "The number is not present "<< endl;

    }
    return 0;
}
