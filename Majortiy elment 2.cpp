class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        for(int i = 0; i < n; i++) {
            int pick = nums[i];
            int count = 1;
            for(int j = i + 1; j < n; j++) {
                if(pick == nums[j]) {
                    count++;
                }
            }
            if(count > n/3) {
                bool element = false;
                for(int i = 0; i < res.size(); i++) {
                    if(res[i] == pick) {
                        element = true;
                        break;
                    }
                }
                if(element==false) {
                    res.push_back(pick);
                }
            }
        }
        return res;
  }–
};
