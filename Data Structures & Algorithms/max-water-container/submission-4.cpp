class Solution {
public:
    int maxArea(vector<int>& h) {
        int i = 0;
        int j = h.size() - 1;
        int area = 0;
        while (i < j) {
            area = max(area, min(h[i],h[j]) * (j - i));
            if (h[i] <= h[j]) i += 1;
            else if (h[i] > h[j]) j -= 1;
        }        
        return area;
    }
};
