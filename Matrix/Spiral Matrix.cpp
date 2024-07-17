class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;
        int rows = matrix.size();
        int cols = matrix[0].size();

        int cnt = 0;
        int n = rows*cols;

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = rows - 1;
        int endingCol = cols -1;

        while(cnt < n)
        {
            for (int index = startingCol;cnt < n && index<=endingCol ;index++)
            {
                ans.push_back(matrix[startingRow][index]);
                cnt++;
            }
            startingRow++;

            for (int index = startingRow;cnt < n && index<=endingRow ;index++)
            {
                ans.push_back(matrix[index][endingCol]);
                cnt++;
            }
            endingCol--;

            for (int index = endingCol;cnt < n && index>=startingCol ;index--)
            {
                ans.push_back(matrix[endingRow][index]);
                cnt++;
            }
            endingRow--;

            for (int index = endingRow;cnt < n && index>=startingRow ;index--)
            {
                ans.push_back(matrix[index][startingCol]);
                cnt++;
            }
            startingCol++;
        }
    return ans;
    }
};