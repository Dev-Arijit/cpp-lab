#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int i = 0;
    float number = 0;
    while (n!= 0)
    {
        bool bit = n & 1;
        number = (bit * pow(10,i)) + number;
        n = n >> 1;
        i++;
    }
    cout << number;
}