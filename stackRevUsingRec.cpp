#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st, int val){
    if(st.empty()){
        st.push(val);
        return;
    }
    int top  = st.top();
    st.pop();
    insertAtBottom(st,val);
    st.push(top);
}

void reverse(stack<int>&st){
    if(st.empty()){
        return;
    }
    int num = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,num);
}

void print(stack<int>st){
    if(st.empty()){
        return;
    }
    int num = st.top();
    st.pop();
    print(st);
    cout << num << " ";
}

int main(int argc, char const *argv[])
{
    stack<int> st;
    st.push(2);
    st.push(5);
    st.push(3);
    st.push(6);
    st.push(9);
    print(st);
    cout << endl;
    reverse(st);  
    print(st);
    cout << endl;
    return 0;
}
