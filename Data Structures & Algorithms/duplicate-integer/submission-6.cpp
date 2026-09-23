class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.size() == 0){ 
            return false;
        }

        // sort ascendingly
        std::sort(nums.begin(), nums.end());
        if (auto it = std::adjacent_find(nums.begin(), nums.end()); it != nums.end()){
            return true;
        }    
        return false;
    }
};