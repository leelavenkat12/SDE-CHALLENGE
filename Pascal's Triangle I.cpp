class Solution {
private:
//helper function is for to genrate cols one by one nad at last return it

    vector<int> genarterow(int row) {
        //as first element of every row is 1 so 

        long long ans = 1;
        vector<int> ansrow;

        ansrow.push_back(1);
// to print the cols of each element we have to first row -col and divide with col
        for (int col = 1; col < row; col++) {
            ans = ans * (row - col);
            ans = ans / col;
            ansrow.push_back(ans);
        }

        return ansrow;
    }

public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int i = 1; i <= numRows; i++) {
            ans.push_back(genarterow(i));
        }

        return ans;
    }
};
