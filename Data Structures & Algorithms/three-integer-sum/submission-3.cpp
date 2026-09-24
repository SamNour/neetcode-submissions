class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        auto twoSum = [&](vector<int>& nums, int target, int index) -> set<vector<int>> {
            unordered_map<int, int> hashMap {};
            set<vector<int>> res{};
            for (int i = 0; i < nums.size(); i++){
                if (i == index)
                    continue;
                int diff = target - nums[i];
                
                if (hashMap.contains(diff)){
                    vector<int> triplet = {
                                        nums[hashMap[diff]],
                                        nums[i],
                                        nums[index]
                                    };
                    sort(triplet.begin(), triplet.end());
                    res.insert(triplet);
                }

                hashMap[nums[i]] = i ;
            }

            return res;
        };
        // create a map for the nums array to retrive the targets index
    
        set<vector<int>> twoIndices {};
        for (int i = 0; i < nums.size(); i++){
            set<vector<int>> result = twoSum(nums, -nums[i], i);
            twoIndices.insert(result.begin(), result.end());
        }
        return vector<vector<int>>(twoIndices.begin(), twoIndices.end());

    }
};
