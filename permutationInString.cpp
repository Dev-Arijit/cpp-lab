class Solution {
private: 
    bool check(int arr[], int arr2[]){
        for(int i=0; i<26; i++){
            if(arr[i] != arr2[i]){
                return 0;
            }
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        for(int i =0; i<s1.length();i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }

        int i = 0;
        int count2[26] = {0};
        while(i<s1.length() && i<s2.length()){
            int index = s2[i] -'a';
            count2[index]++;
            i++;

        }
        if(check(count1,count2)){
            return 1;
        }

        while(i<s2.length()){
            int newind = s2[i] - 'a';
            count2[newind]++;
            int oldind = s2[i - s1.length()] - 'a';
            count2[oldind]--;
            i++;

            if(check(count1,count2)){
            return 1;
        }
        }
        

        return 0;

    }
};