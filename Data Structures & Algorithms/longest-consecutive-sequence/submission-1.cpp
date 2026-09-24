class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set hashSet(nums.begin(), nums.end());
        int count = 0;
        for (size_t i = 0; i < nums.size(); i++){
            if (!hashSet.contains(nums[i] - 1)){
                // this is the start of the sequesnt
                int current = 1;
                int currVal = nums[i] + 1;

                while (hashSet.contains(currVal)) {
                    current += 1;
                    currVal += 1;
                }
            count = max(current, count);
        }
    }

    return count;
    }
};
