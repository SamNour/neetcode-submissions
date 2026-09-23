class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.size() == 0) 
            return false;

        // sort ascendingly
        std::sort(nums.begin(), nums.end());
        
        auto it = std::adjacent_find(nums.begin(), nums.end());

        return  it != nums.end() ? true : false;
    }
};