#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
     cout << "enter the nmber of rows " ;
    int row;
    cin >> row;
    int col;
    cout << "Enter the number of columns ";
    cin >> col;

    int arr[row][col];
    cout << "Enter the elements ";
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    int max = INT32_MIN;
    int ans = 0;
    for(int i = 0; i<row; i++){
        int sum = 0;
        for(int j = 0; j<col; j++){
            sum += arr[i][j];
        }
        if(sum > max){
            max = sum;
            ans = i+1;
        }
    }
    cout << "Maximum Sum of row is " << max << endl;
    cout << "Number of the row is " << ans << endl;


    return 0;
}
