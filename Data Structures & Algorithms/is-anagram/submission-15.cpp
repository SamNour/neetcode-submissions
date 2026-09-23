class Solution {
public:
    template<typename T>
    bool isAnagram(T s, T t) {
        // Anagrams need to be the same size
        if (s.size() != t.size()) return false;

        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        // return s == t;

        int i = 0;
        while (i < s.size() && s[i] == t[i]) 
            i += 1;
        return i == s.size();
    }
};
