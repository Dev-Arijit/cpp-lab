#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start <= end){
        if(arr[mid] ==key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    
    }
    return -1;

}
int main(){
    int odd[5] = {2,4,5,7,8};
    int even[6] = {1,4,5,8,9,11};
    int index = binarySearch(odd,5,8);
    int index2 = binarySearch(even,6,8);
    cout << "index of 8 is "<< index << endl;
    cout << "index of 8 is "<< index2 << endl;


}