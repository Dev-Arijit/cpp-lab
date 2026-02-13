#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSafe(int x, int y, vector<vector<int>> mat,int n, vector<vector<int>> visited){
    if((x >= 0 & x < n) && (y >= 0 && y < n) && mat[x][y] == 1 && visited[x][y] == 0){
        return true;
    }
    else{
        return false;
    }
}
void solve(int x, int y,vector<vector<int>> mat,vector<vector<int>> visited,int n,vector<string> &ans,string path){
    if(x == n-1 && y == n-1){
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // right
    int newx = x;
    int newy = y+1;
    if (isSafe(newx,newy,mat,n,visited)){
        path.push_back('R');
        solve(newx, newy,mat,visited,n,ans,path);
        path.pop_back();
    }
    // left
    int newx = x;
    int newy = y-1;
    if (isSafe(newx,newy,mat,n,visited)){
        path.push_back('L');
        solve(newx, newy,mat,visited,n,ans,path);
        path.pop_back();
    }
    // down
    int newx = x+1;
    int newy = y;
    if (isSafe(newx,newy,mat,n,visited)){
        path.push_back('D');
        solve(newx, newy,mat,visited,n,ans,path);
        path.pop_back();
    }
    // up
    int newx = x-1;
    int newy = y;
    if (isSafe(newx,newy,mat,n,visited)){
        path.push_back('U');
        solve(newx, newy,mat,visited,n,ans,path);
        path.pop_back();
    }
}
vector<string> path(vector<vector<int>> &mat)
{
    vector<string> ans;
    vector<vector<int>> visited(mat);
    int n = mat[0].size();
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            visited[i][j] = 0;
        }
    }

    if (mat[0][0] == 0)
    {
        return ans;
    }
    int srcx = 0;
    int srcy = 0;
    string path = "";
    solve(srcx,srcy,mat,visited,n,ans,path);
}
int main(int argc, char const *argv[])

{
    vector<vector<int>> mat;

    return 0;
}
