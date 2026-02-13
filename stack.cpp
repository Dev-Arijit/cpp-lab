#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int val){
        if(size - top > 1){
            top++;
            arr[top] = val;
        }
        else{
            cout << "Stack overflow" << endl;
        }
    }

    void pop(){
        if(top == -1){
            cout << "Stack underflow" << endl;
        }
        else{
            top--;
        }
    }

    int peek(){
        if(top ==  -1){
            cout << "Stack is empty" << endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }

    bool isEmpty(){
        if(top ==  -1){
            cout << "Stack is empty" << endl;
        }
        else{
            cout << "Stack is not empty" << endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(40);

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    if(st.isEmpty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;

    }
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();

    if(st.isEmpty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;

    }

    return 0;
}
