class Solution {
public:
    // Function to set entire row and column to 0 if an element in the matrix is 0
    void setZeroes(vector<vector<int>>& matrix) {
        // Get number of rows
        int m = matrix.size();
        // Get number of columns
        int n = matrix[0].size();
        vector<int> row(m, 0);

        vector<int> col(n, 0);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // If element is zero, mark its row and column
                if (matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // If the row or column is marked, set cell to zero
                if (row[i] == 1 || col[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
