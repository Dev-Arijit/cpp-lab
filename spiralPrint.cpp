class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> ans;

        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row*col;

        // initializing indexes
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col -1 ;

        while(count < total){
            // printing staring row
            for(int i = startingCol; count < total && i <= endingCol; i++ ){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            // printing ending col
            for(int i = startingRow; count < total && i <= endingRow; i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            // printing ending row
            for(int i = endingCol; count < total && i >= startingCol; i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            //printing starting col
            for(int i = endingRow; count < total && i >= startingRow; i--){
                ans.push_back(matrix[i][startingCol]);
                count++;

            }
            startingCol++;
        }

        return ans;

    }
};