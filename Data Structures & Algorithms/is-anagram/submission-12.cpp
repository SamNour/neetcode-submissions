class Solution {
public:
    bool isAnagram(string s, string t) {
        // Anagrams need to be the same size
        if (s.size() != t.size()) return false;
        // sort 
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        
        int i = 0;
        
        while (i < s.size() && s[i] == t[i]) {
            i += 1;
        }
        return i == s.size();
        // aaccrr -- aaccrr
    }
};
