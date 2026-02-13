#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mergeSort(vector<int>arr1, vector<int>arr2){
    for(int i = 0; i < arr2.size(); i++){
        arr1.push_back(arr2[i]);
    }
    sort(arr1.begin(),arr1.end());
    for(int i:arr1){
        cout << i << " ";
    }cout << endl;
}
int main(int argc, char const *argv[])
{
    vector<int>arr1;
    vector<int>arr2;
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(5);
    arr1.push_back(6);
    arr1.push_back(8);
    arr2.push_back(3);
    arr2.push_back(4);
    arr2.push_back(7);
    mergeSort(arr1,arr2);
    return 0;
}
