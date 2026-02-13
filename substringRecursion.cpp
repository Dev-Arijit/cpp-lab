#include <iostream> 
#include <vector> 
#include <string> 
using namespace std;

void solve(string str, string output, int index, vector<string> &ans){
	if(index >= str.length()){
		if(output.length()>0){
			ans.push_back(output);
		}
		
		return;
	}

	// exclude
	solve(str,output,index+1,ans);

	// include
	char s = str[index];
	output.push_back(s);
	solve(str,output,index+1,ans);
}
vector<string> subsequences(string str){
	
	vector<string>ans;
	string output = "";
	int index = 0;

	solve(str,output,index,ans);

	return ans;
	
}

int main(int argc, char const *argv[])
{
    string str = " ";
    vector<string> answer = subsequences(str);
    return 0;
}
