#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(6);
    v.push_back(7);    
    cout << binary_search(v.begin(),v.end(),5);
    return 0;
}
