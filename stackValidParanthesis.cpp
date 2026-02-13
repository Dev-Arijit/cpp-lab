#include<iostream>
#include<stack>
using namespace std;

bool isValid(string str){
    stack<char> valid;

    for(int i = 0; i<str.length(); i++){
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '['){
            valid.push(ch);
        }
        else{
            if(!valid.empty()){
                char top = valid.top();
                if((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[')){
                    valid.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }

    if(valid.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main(int argc, char const *argv[])
{
    string str = "[{}[(){()})]]";
    if(isValid(str)){
        cout << "It is valid" << endl;
    }
    else{
        cout << "It is not valid" << endl;
    }
    return 0;
}
