Implementation of lower and upperbound
Cheching the first and last occurence of the given element 
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int ind1 = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        int ind2 = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
        if(ind1<nums.size() && nums[ind1]==target){
            return {ind1,--ind2};
        }
        return {-1,-1};
    }
};