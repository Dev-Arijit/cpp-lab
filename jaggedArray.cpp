#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int row;
    cout << "Enter the number of rows " << endl;
    cin >> row;
    int **arr = new int*[row];
    int col[row];
    for(int i = 0; i < row; i++){
        int col;
        cout << "Enter the number of cols in row no. " <<i+1<< endl;
        cin >> col[i];
        arr[i] = new int[col];
        cout << "Enter the elements in the col " << endl;
        for(int j = 0; j<col;j++){
            cin >> arr[i][j];
        }
    }

    // cout << sizeof(arr[1]);

    for(int i = 0; i < row; i++){
        for (int j = 0; j < sizeof(arr[i]); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }   
    return 0;
}
