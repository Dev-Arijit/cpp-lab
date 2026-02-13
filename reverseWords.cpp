#include<iostream>
#include<string>
using namespace std;

string reverse(string str){
    int s = 0;
    int e = str.length()-1;
    while(s<e){
        swap(str[s++],str[e--]);
    }
    return str;
}

void revWords(string str){
    string str2;
    string temp;
    for(int i = 0; i < str.length(); i++){
        temp = str[i];
        if(str[i] == ' ' || str[i] == '\0'){
            str2 = str2 + reverse(temp);
            temp.erase(); 
        }
    }
    cout << str2;
}
int main(int argc, char const *argv[])
{
    string str = "My name is arijit";
    revWords(str);
    return 0;
}
