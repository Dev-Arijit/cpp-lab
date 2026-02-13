#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    char ch = '2';
    /*
    switch (ch)
    {
    case 1:
        cout << "first" << endl;
        break;

    case '1':
        switch (num)
        {
        case 1:
            cout << "Second" << endl;
            break;
        }
        break;

    default:
        cout << "This is default case" << endl;
    }
    */

    while (1)
    {

        switch (ch)
        {
        case 1:
            cout << "first" << endl;
            break;

        case '1':
            cout << "character one" << endl;
            break;

        case '2':
            cout << "character two" << endl;
            exit(0);
        }
    }
}