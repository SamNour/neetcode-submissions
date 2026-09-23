class Solution {
public:
    template<typename T>
    bool hasDuplicate(vector<T>& nums) {
        if (nums.size() < 2) 
            return false;

        std::sort(nums.begin(), nums.end());

        return std::adjacent_find(nums.begin(), nums.end()) != nums.end();
    }
};