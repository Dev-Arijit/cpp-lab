#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s + (e-s)/2;
    int len1 = mid -s+1;
    int len2 = e-mid;

    int mainIndex = s;

    int *first = new int[len1];
    int *second = new int [len2];

    for(int i = 0; i < len1; i++){
        first[i] = arr[mainIndex++];
    }
    for(int i = 0; i < len1; i++){
        second[i] = arr[mainIndex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainIndex = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainIndex++] = first[index1++];
        }
        else{
            arr[mainIndex++] = second[index2++];
        }
    }

    while(index1 < len1){
        arr[mainIndex++] = first[index1++];
    }
    while(index2 < len2){
         arr[mainIndex++] = second[index2++];
    }
}
void mergeSort(int *arr, int s, int e){
    if(s >= e){
        return;
    }
    int mid = s + (e-s)/2;

    // left side sort karna h
    mergeSort(arr,s,mid);

    // right side sort karna h
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}
int main(int argc, char const *argv[])
{
    int arr[7] = {2,6,9,3,6,1,7};
    int n = 7-1;

    mergeSort(arr,0,n);

    for(int i = 0; i <= n;i++){
        cout << arr[i] << " ";
    }cout << endl;

    return 0;
}
