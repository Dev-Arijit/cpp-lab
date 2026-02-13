<<<<<<< HEAD
class Solution {
public:
    string removeDuplicates(string s) {
        string temp;
        for(int i = 0; i < s.length(); i++){
            if(temp.empty() || temp.back() != s[i]){
                temp.push_back(s[i]);
            }
            else{
                temp.pop_back();
            }
        }
        return temp;
    }
    
=======
class Solution {
public:
    string removeDuplicates(string s) {
        string temp;
        for(int i = 0; i < s.length(); i++){
            if(temp.empty() || temp.back() != s[i]){
                temp.push_back(s[i]);
            }
            else{
                temp.pop_back();
            }
        }
        return temp;
    }
    
>>>>>>> bf7ee5b (ready to upload)
};