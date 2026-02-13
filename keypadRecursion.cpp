#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(string digit, string output, int index, vector<string> &ans, string mapping)
{
    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digit[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, output, index + 1, ans, mapping);
        output.pop_back();
    }
}
vector<string> letterCombinations(string digits)
{
    vector<string> ans;

    if (digits.length() == 0)
    {
        return;
    }

    string output = "";
    int index = 0;
    string map[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    solve(digits, output, index, ans, map);
    return ans;
}

int main(int argc, char const *argv[])
{
    string digit = "234";
    vector<string> answer = letterCombinations(digit);
    return 0;
}

;