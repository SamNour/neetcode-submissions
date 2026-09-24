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
        vector<char> reversed(filtered.begin(), filtered.end());
        std::reverse(reversed.begin(), reversed.end());
        return reversed == filtered;
    }
};
