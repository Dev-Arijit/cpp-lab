#include<iostream>
using namespace std;

char getMaxOccCharacter(string s){
    int arr[26] = {0};
    int number;
    int ans = -1;
    for(int i = 0; i<s.length(); i++){
        number = s[i]-'a';
        arr[number]++;
    }
    int maxi = -1;
    for(int i = 0; i< 26; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
            ans = i;
        }
        else if(arr[i] == maxi){
            ans = min(ans,i);
        }
    }

    return ans+'a';
}
int main(int argc, char const *argv[])
{
    string str;
    cin >> str;
    cout << getMaxOccCharacter(str);
    return 0;
}
