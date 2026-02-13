#include <iostream>
using namespace std;

bool isPossibleSol(int n,int m, int arr[],int mid){
    int dayCount = 1;
    int timeSum = 0;
    for(int i = 0;i<m;i++){
        if(timeSum + arr[i] <= mid){
            timeSum += arr[i];
        }
        else{
            dayCount++;
            if(dayCount > n || arr[i] > mid){
                return false;
            }
            timeSum = arr[i];
        }
    }
    return true;

}

long long ayushGivesNinjatest(int n, int m, int time[]) 
{	
	int s = 0;
    int sum=0;
    for(int i = 0; i<m;i++){
        sum += time[i];
    }
    int e = sum;
    int ans=-1;
    int mid = s + (e-s)/2;
    
    while(s <= e){
        if (isPossibleSol(n,m,time,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    
}