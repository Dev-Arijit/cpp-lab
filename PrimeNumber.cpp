#include <iostream>
using namespace std;

int main()
{
    int n;
    bool flag = 0;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 2; i <= n/2; i++)
    
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "The number is not prime " << endl;
    }
    else
    {
        cout << "The number is prime" << endl;
    }
}