#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of elemnts of the array ";
    int n;
    cin >> n;
    cout << "Enter the elements in the array ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i],arr[i+1]);
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}