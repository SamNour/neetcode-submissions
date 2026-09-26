class Solution {
public:
    int maxArea(vector<int>& h) {
        int left = size_t{0};
        int j = h.size() - 1;
        int max_area = 0;
        while (left < j) {
            max_area = max(max_area, min(h[left],h[j]) * (j - left));
            if (h[left] <= h[j]) left += 1;
            else if (h[left] > h[j]) j -= 1;
        }        
        return max_area;
    }
};
