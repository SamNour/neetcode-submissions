class Solution {
public:
    bool isAnagram(string s, string t) {
        // the O(n) solution
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s.size() != t.size()) return false;
        for (size_t i{}; i < s.size(); i++ ){
            if (s[i] != t[i]) return false;
        }
        return true;
    }
};
