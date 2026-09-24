class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int r = nums.size() - 1;
        int l = 0;

        while (l < r) {
            if (nums[r] + nums[l] == target) return {l+1, r+1};
            // this can't be negative as the arr is guaranteed to be desc sorted
            if (nums[r] + nums[l] < target) {
                l++;
            } else if (nums[r] + nums[l] > target) {
                r --;
            }
        }
        return {l+1, r+1};

    }
};
