class Solution {
public:
    template<typename T>
    vector<T> twoSum(vector<T>& nums, T target) {
        if (nums.size() < 2) return {};

        std::unordered_map<int, int> indexMap {};
        for (int i = 0; i < nums.size(); i++) {
            
            int diff = target - nums[i];
            
            if (indexMap.count(diff)){
                return {indexMap[diff], i};
            }
            
            indexMap[nums[i]] = i;
        }
        return {};
        // 1,3,4,5,6  --- 10 ~~~ find_if( , std::count10 - 3 in array)
    }
};
