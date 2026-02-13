#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 9;
    int arr[n] = {3,5,4,7,8,5,3,6,4};
    stack<int> s;
    vector<int> ans;
    s.push(-1);

    for(int i = n-1; i >= 0; i--){
        int curr = arr[i];
        while(s.top() >= curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
