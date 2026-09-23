class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int, int> indexMap;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (indexMap.contains(diff)){
                return {indexMap[diff], i};
            }
            indexMap[nums[i]] = i;
        }
        return {};
        // 1,3,4,5,6  --- 10 ~~~ find_if( , std::count10 - 3 in array)
    }
};
