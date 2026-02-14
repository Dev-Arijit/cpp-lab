#include <iostream>
#include <vector>
using namespace std;

void type1(vector<int> &arr, int l, int r){
    for(int i = l; i <= r; i++){
        arr[i] = (i-l+1)*arr[l];
    }
}

int type2(vector<int> arr, int l, int r){
    int sum = 0;
    for(int i = l; i <= r; i++){
        sum += arr[i];
    }
    return sum;
}

int solve(int arrlen, vector<int> &arr, int qlen, vector<vector<int>> &q){
    int ans = 0;
    for(int i = 0; i < qlen; i++){
        if(q[i][0] == 1){
            type1(arr,q[i][1],q[i][2]);
        }
        else if(q[i][0] == 2){
            ans += type2(arr,q[i][1],q[i][2]);
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int arrlen = 7;
    int qlen = 5;
    vector<int> arr1 = {1,4,5,1,6,7,8};
    vector<vector<int>> q1 = {{1,1,6},{1,1,5},{2,5,5},{2,3,4},{2,3,3}};

    vector<int> arr2 = {3,7,4,2,5,3,7};
    vector<vector<int>> q2 = {{1,0,4},{2,0,1},{1,3,6},{2,3,3},{2,0,5}};

    vector<int> arr3 = {1,8,6,10,5,6,9};
    vector<vector<int>> q3 = {{2,0,3},{1,2,3},{1,0,6},{2,1,4},{2,6,6}};

    vector<int> arr4 = {1,4,5,1,6,7,8};
    vector<vector<int>> q4 = {{1,1,6},{1,1,5},{2,5,5},{2,3,4},{2,3,3}};

    vector<int> arr5 = {3,7,4,2,5,3,7};
    vector<vector<int>> q5 = {{1,0,4},{2,0,1},{1,3,6},{2,3,3},{2,0,5}};

    vector<int> arr6 = {1,8,6,10,5,6,9};
    vector<vector<int>> q6 = {{2,0,3},{1,2,3},{1,0,6},{2,1,4},{2,6,6}};

    cout<< solve(arrlen, arr1, qlen, q1) << endl;
    cout<< solve(arrlen, arr2, qlen, q2) << endl;
    cout<< solve(arrlen, arr3, qlen, q3) << endl;
    cout<< solve(arrlen, arr4, qlen, q4) << endl;
    cout<< solve(arrlen, arr5, qlen, q5) << endl;
    cout<< solve(arrlen, arr6, qlen, q6) << endl;

    return 0;
}
