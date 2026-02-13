#include<iostream>
#include<stack>
using namespace std;

void sortInsert(stack<int>&st, int val){
    if(st.empty()){
        st.push(val);
        return;
    }
    if(st.top() < val){
        st.push(val);
        return;
    }

    int top = st.top();
    st.pop();
    sortInsert(st,val);
    st.push(top);
}

void sort(stack<int>&st){
    if(st.empty()){
        return;
    }
    int num = st.top();
    st.pop();
    sort(st);
    sortInsert(st,num);
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
    sort(st);  
    print(st);
    cout << endl;
    return 0;
}
