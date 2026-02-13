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
    
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int sum = 0;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            sum += arr[i][j];
        }
        cout << "Sum of the row no. " << i+1 << " is " << sum << endl;
        sum = 0;
    }


    
    return 0;
}
