class Solution {
public:
    template<typename T>
    bool hasDuplicate(vector<T>& nums) {
        if (nums.size() == 0) 
            return false;

        std::sort(nums.begin(), nums.end());

        auto adjacentFind = ([&](vector<T>& nums){
            auto it = std::adjacent_find(nums.begin(), nums.end());
            return  it != nums.end() ? true : false;
        });

        return adjacentFind(nums);
    }
};