#include <iostream>
using namespace std;

bool search(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
        
    }
    return 0;
    
}
int main(int argc, char const *argv[])
{
    cout << "Enter the number of the elements " ;
    int n;
    cin >> n;
    cout << "Enter the elements in the array ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout <<"Enter the key element " << endl;
    int key ;
    cin >> key;
    if(search(arr,n,key)){
        cout << "The key is present" << endl;
    }
    else{
        cout <<"The key is not present" << endl;
    }

    
    return 0;
}
