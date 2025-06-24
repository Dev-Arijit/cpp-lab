#include <iostream>
using namespace std;

int firstOcc(int arr[],int size,int key){
    int s = 0;
    int e = size - 1;
    int ans=-1,mid = s + (e-s)/2;
    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] < key){
            s = mid + 1;

        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
} 

int lastOcc(int arr[],int size,int key){
    int s = 0;
    int e = size - 1;
    int ans=-1,mid = s + (e-s)/2;
    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid] < key){
            s = mid + 1;

        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
} 


int main(){
    int even[6] = {1,2,3,3,3,5};
    cout << firstOcc(even,6,3) << endl;
    cout << lastOcc(even,6,3) << endl;

}