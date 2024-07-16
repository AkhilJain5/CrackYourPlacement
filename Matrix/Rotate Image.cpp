class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        for(int row = 0; row<matrix.size();row++)
        {
            for(int col = row+1; col<matrix[row].size();col++)
            {
                swap(matrix[row][col], matrix[col][row]);
            }
        }

        for(int i = 0; i<matrix[0].size();i++)
        {
            int a = 0;
            int b = matrix[i].size()-1;
            while(a<b)
            {
                swap(matrix[i][a], matrix[i][b]);
                a++;
                b--;
            }
        }
    }
};