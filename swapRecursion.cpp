#include<iostream>
using namespace std;

void reverse(int i, string& s){
    int n = s.length();
    if(i>n-i-1){
        return;
    }
    swap(s[i],s[n-i-1]);
    i++;
    reverse(i,s);
}
int main(int argc, char const *argv[])
{
    string name = "Arijit";
    reverse(0,name);
    cout << name << endl;
    return 0;

}                                                                                                                           
