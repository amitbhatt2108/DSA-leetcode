class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int m = matrix.size();        // rows
        int n = matrix[0].size();     // columns

        // New matrix: n rows and m columns
        vector<vector<int>> ans(n, vector<int>(m));

        for(int j = 0; j < n; j++) {
            for(int i = 0; i < m; i++) {
                
                ans[j][i] = matrix[i][j];
            }
        }

        return ans;
    }
};