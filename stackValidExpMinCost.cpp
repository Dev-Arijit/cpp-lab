#include<iostream>
#include<stack>
using namespace std;

int validCost(string str){
    if(str.length()%2 == 1){
        return -1;
    }
    stack<char> s;
    for(int i = 0; i < str.length();i++){
        char ch = str[i];
        if(ch == '{'){
            s.push(ch);
        }
        else{
            if(!s.empty() && s.top() == '{'){
                s.pop();
            }
            else{
                s.push(ch);
            }
        }
    }
    int a = 0; 
    int b = 0; 
    while(!s.empty()){
        if(s.top() == '{'){
            a++;
            s.pop();
        }
        else{
            b++;
            s.pop();
        }
    }
    int ans = (a+1)/2 + (b+1)/2;
    return ans;
}
int main(int argc, char const *argv[])
{
    string str1 = "{{}{}}{";
    string str2 = "{{}}}}{{";
    string str3 = "{{{}{{}{";
    string str4 = "{{";
    cout << validCost(str1) << endl;
    cout << validCost(str2) << endl;
    cout << validCost(str3) << endl;
    cout << validCost(str4) << endl;
    return 0;
}
