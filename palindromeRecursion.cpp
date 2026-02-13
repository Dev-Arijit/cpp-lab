#include<iostream>
using namespace std;

bool isPalindrome(string& str, int i){
    int n = str.length();
    if(i>n-i-1){
        return true;
    }
    if(str[i] != str[n-i-1]){
        return false;
    }
    else {
        return isPalindrome(str,++i);

    }

    

}
int main(int argc, char const *argv[])
{
    string name = "asdsa";
    if(isPalindrome(name,0)){
        cout << "It is palindrome" << endl;
    }
    else{
        cout << "It is not palindrome" << endl;

    }
    return 0;
}
