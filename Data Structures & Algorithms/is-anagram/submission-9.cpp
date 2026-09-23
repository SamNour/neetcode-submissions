class Solution {
public:
    bool isAnagram(string s, string t) {
        // Anagrams need to be the same size
        if (s.size() != t.size()) return false;
        // sort 
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        
        return s == t;
        // aaccrr -- aaccrr
    }
};
