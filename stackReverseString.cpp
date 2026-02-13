#include<iostream>
#include<stack>
using namespace std;

int main(int argc, char const *argv[])
{
    string str = "Arijit";
    stack<char> s;
    for(int i = 0; i < str.length(); i++){
        s.push(str[i]);
    }
    string ans = "";
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout << "The string is " << str << endl;
    cout << "The reverse string is " << ans << endl;
    return 0;
}
