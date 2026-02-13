#include <iostream>
using namespace std;

int getMax(int arr[], int n)
{
    int maxi = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi,arr[i]);
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
    return maxi;
}

int getMin(int arr[], int n)
{
    int mini = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini,arr[i]);
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    return mini;
}
int main()
{
    cout << "Enter the size of the array ";
    int n;
    cin >> n;
    cout << "Enter the elements in the array ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "The maximum number in the array is " << getMax(arr, n) << endl;
    cout << "The minimum number in the array is " << getMin(arr, n) << endl;

    
}