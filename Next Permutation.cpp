class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       // firsst we have to find an element that is breakpoint
       int ind=-1;
       int n=nums.size();
       for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            ind =i;
            break;
        }
// if ind is not found as its is increasing order only so next permutation would be simply the reverse of it

       }
       if(ind==-1){
        reverse(nums.begin(),nums.end());
        return;
       }

       // as we know that  if element that is greater than breakpoint one it will be intally swapped 
       // as y swapping means as the values are already in incresing to get min of it simply we can reverse it 

       for(int i=n-1;i>ind;i--){
        if(nums[i]>nums[ind]){
            swap(nums[i],nums[ind]);
            break;
        }

       }
       // by it we can reduce the complexity of not taking sorting one
       reverse(nums.begin()+ind+1,nums.end());
    }
};
