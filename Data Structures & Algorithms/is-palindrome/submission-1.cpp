class Solution {
public:
    bool isPalindrome(string s) {
        // create a char arr of all small chars and only alphanums
        vector<char> filtered {};
        for (const auto& c : s){
            if (std::isalnum(c) && c != ' '){
                filtered.push_back(std::tolower(c));
            }
        }
        int l = 0;
        int r = filtered.size() - 1;

        while (l < r){
            if (filtered[l] != filtered[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
