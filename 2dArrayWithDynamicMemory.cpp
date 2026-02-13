#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /*  int n;
    cin >> n;
    int **arr = new int*[n];
    for(int i = 0; i<n; i++){
        arr[i] = new int[n];
    }

    // taking input
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n;j++){
            cin >> arr[i][j];

        }
    }

    // printing output
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n;j++){
            cout << arr[i][j] << " ";

        }
        cout << endl;
    }

*/

    int m,n;
    cin >>m >> n;
    int **arr = new int*[m];
    for(int i = 0; i<m; i++){
        arr[i] = new int[n];
    }

    // taking input
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n;j++){
            cin >> arr[i][j];

        }
    }

    // printing output
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n;j++){
            cout << arr[i][j] << " ";

        }
        cout << endl;

    }

    // releasing memory
    for(int i = 0; i<m; i++){
        delete []arr[i];
    }

    delete []arr;
    return 0;
}
