#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(6);
    v.push_back(7);

    cout << "Finding 6 " << binary_search(v.begin(),v.end(),6) << endl;

    cout << upper_bound(v.begin(),v.end(),6)-v.begin() << endl;
    cout << lower_bound(v.begin(),v.end(),6)-v.begin() << endl;

    string str = "abcd";
    reverse(str.begin(),str.end());
    cout << str << endl;

    rotate(v.begin(),v.begin()+1,v.end());
    for(auto i: v){
        cout << i <<" ";
    }cout << endl;
    
    return 0;
}
