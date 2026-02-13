#include <iostream>
using namespace std;

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
int length(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main(int argc, char const *argv[])
{
    char name[20];
    cout << "Enter your name ";
    cin >> name;
    // name[3] = '\0';

    cout << "Your name is " << name << endl;
    int len = length(name);
    cout << "Length of the name is " << len << endl;
    reverse(name, len);
    cout << "Your name is " << name << endl;

    return 0;
}
