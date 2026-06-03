class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        // repeat your logic n times
        for(int k = 0; k < n; k++) {

            int j = 1;
            for(int i = 0; i < n-1; i++) {
                if(nums[i] > nums[j]) {
                    swap(nums[i], nums[j]);
                }
                j++;
            }

        }
    }
};
