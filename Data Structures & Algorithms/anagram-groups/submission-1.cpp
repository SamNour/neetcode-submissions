class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, std::vector<string>> mpAnagrams{};
        for (auto & str : strs){
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            mpAnagrams[sorted].push_back(str);
        }

        std::vector<std::vector<string>> collectResults {};

        for (auto const &[k,v] : mpAnagrams) {
            collectResults.push_back(v);
        }
        return collectResults;
    }
};
