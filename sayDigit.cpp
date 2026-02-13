#include<iostream>
using namespace std;

void sayDigit(int n,string arr[]){
    if (n == 0){
        return;
    }
    int digit = n%10;
    sayDigit(n/10,arr);
    cout << arr[digit] << " ";
}
int main(int argc, char const *argv[])
{
    string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    int n;
    cout << "Enter the number ";
    cin >> n;
    sayDigit(n,arr);
    return 0;
}
