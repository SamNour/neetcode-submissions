class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // the easiest way is to count all elements in a counter
        std::unordered_map<int, int> hashMap = {};
        for (int i = 0; i < nums.size() ; i++){
            hashMap [nums[i]] += 1;    
        }
        // then sort the map by values
        std::vector<std::pair<int, int>> v(hashMap.begin(), hashMap.end());
        std::sort(v.begin(), v.end(), [](const auto &a, const auto& b) {
            return a.second > b.second;
        });
        // return top k
        std::vector<int> topK {};
        for (int i = 0; i < k; i++) {
            topK.push_back(v[i].first);
        }
        return topK;
    }
};
