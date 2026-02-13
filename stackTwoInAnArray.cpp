#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int top1;
    int top2;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    void push1(int val){
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = val;
        }
        else{
            cout << "Stack overflow" << endl;
        }
    }

    void pop1(){
        if(top1 >= 0){
            int value = arr[top1];
            top1--;
            cout << value << " is popped from the stack" << endl;
        }
        else{
            cout << "Stack underflow" << endl;
        }
    }

    void push2(int val){
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = val;
        }
        else{
            cout << "Stack overflow" << endl;
        }
    }

    void pop2(){
        if(top2 <= size){
            int value = arr[top2];
            top2++;
            cout << value << " is popped from the stack" << endl;
        }
        else{
            cout << "Stack underflow" << endl;
        }
    }

    void peek1(){
        if(top1 >= 0){
            
            cout << arr[top1] << endl;
        }
        else{
            cout << "Stack underflow" << endl;
        }
    }

    void peek2(){
        if(top2 <= size){
            int value = arr[top2];
            
            cout << value << endl;
        }
        else{
            cout << "Stack is empty" << endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    Stack st(5);
    st.push1(1);
    st.push1(2);
    st.push1(3);
    st.push2(4);
    st.push2(5);
    st.push2(6);
    st.peek1();
    st.peek2();
    st.pop1();
    st.pop1();
    st.pop1();
    st.pop1();
    st.pop2();
    st.pop2();
    st.pop2();
    st.pop2();
    return 0;
}
