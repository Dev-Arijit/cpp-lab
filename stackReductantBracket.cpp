#include<iostream>
#include<stack>

using namespace std;

bool redundant(string str){
    stack<int> st;
    for(int i = 0; i<str.length(); i++){
        char ch = str[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }
        else{
            if(ch == ')'){
                bool red = true;
                while(st.top() != '('){
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '*' || top == '/'){
                        red = false;
                    }
                    st.pop();
                }
                st.pop();

                if(red == true){
                    return true;
                }
            }
        }
    }
    return false;

}

int main(int argc, char const *argv[])
{
    string str =  "(a+b(a*b))";
    if(redundant(str)){
        cout << "Yes" << endl;
    }
    else{
        cout << "False" << endl;
    }
    return 0;
}
