#include<iostream>
#include<array>
using namespace std;
int main(int argc, char const *argv[])
{
    int basic[4] = {2,3,4,5};
    array<int,4>a = {1,2,3,4};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << a.at(2) << endl;
    cout << a.empty() << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;
    
    return 0;
}
