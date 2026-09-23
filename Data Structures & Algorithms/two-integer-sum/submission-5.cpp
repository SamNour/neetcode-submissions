
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	    std::vector<int> res {};
        std::unordered_map<int,int> hm;

        for (size_t i = 0; i < nums.size(); i++){
            int tmp = target - nums[i];
            if (hm.find(tmp) != hm.end()){
                res.push_back(hm[tmp]);
                res.push_back(static_cast<int>(i));
                return res;
            } else {
                hm[nums[i]]=i;
            }
        }
        return res;
    }
};
