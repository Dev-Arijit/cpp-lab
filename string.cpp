#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   /* char str[10];
    cin.getline(str,10);
    cout << str;

    string str2;
    getline(cin,str2);
    cout << str;     */

    char str[50];
    cin.getline(str,50,'&');
    cout << str;

    return 0;
}
