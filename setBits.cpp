#include <iostream>
using namespace std;

int bits(int n)
{
    int count = 0;
    while(n != 0){
        int bit = n & 1;
        if (bit == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    cout << "Enter two numbers " << endl;
    int a, b;
    cin >> a >> b;
    int ans = bits(a) + bits(b);
    cout << "Total number of set bits are " << ans << endl;
}