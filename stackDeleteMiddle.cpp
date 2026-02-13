#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &input, int count, int size){
    if(count == size/2){
        input.pop();
        return;
    }

    int num = input.top();
    input.pop();
    solve(input,count+1,size);
    input.push(num);
}

void display(stack<int> input){
    while(!input.empty()){
        cout<< input.top() << " ";
        input.pop();
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    stack<int> input;
    input.push(1);
    input.push(2);
    input.push(3);
    input.push(4);
    input.push(5);

    display(input);
    solve(input,0,5);
    display(input);

    return 0;
}
