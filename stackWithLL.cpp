#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Stack{

    Node* top;
    public:
    Stack(){
        top = NULL;
    }

    void push(int val){
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        cout << val << " is pushed in the stack" << endl;
    }

    void peek(){
        if(top == NULL){
            cout << "Stack is empty" << endl;
        }
        else{
            cout << top->data << endl;
        }
    }

    void pop(){
        if(top == NULL){
            cout << "Stack underflow" << endl;
        }
        else{
            Node* temp = top;
            int popped = top->data;
            top = top->next;
            delete temp;
            cout << "Popped " << popped << " from the stack" << endl;
        }
    }

    bool isEmpty(){
        return top == NULL;
    }
};
int main(int argc, char const *argv[])
{
    Stack st;
    if(st.isEmpty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }
    st.push(5);
    st.peek();
    st.push(6);
    st.peek();
    st.push(7);
    st.peek();
    st.push(8);
    st.peek();
    st.push(9);
    st.peek();

    if(st.isEmpty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }
    return 0;
}
