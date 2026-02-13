#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {

        int a = 0;
        int b = 1;
        int c;
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}

int main(int argc, char const *argv[])
{
    cout << "Enter which term you want in fibonacci series ";
    int n;
    cin >> n;
    int term = fibonacci(n);
    cout << term;
    return 0;
}
