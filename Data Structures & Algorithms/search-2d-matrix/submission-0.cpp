class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        auto binarySearch = [&](const auto arr) {
            int left = 0;
            int right = arr.size() - 1;

            while (left <= right){
                const int mid = (left + right) / 2;
                if (arr[mid] == target) return mid; // index
                else if (target > arr[mid]) left = mid + 1;
                else if (target < arr[mid]) right = mid - 1;
            }
            return -1;
        };
        for (int i = 0; i < matrix.size(); i ++){
            if (binarySearch(matrix[i]) != -1) return true;
        }
        return false;
    }
};
