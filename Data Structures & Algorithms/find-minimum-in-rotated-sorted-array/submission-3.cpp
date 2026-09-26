class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0;
        int right = nums.size() - 1;
        int res = nums[0];

        while (left <= right){
            if (nums[left] <= nums[right]) {
                res = std::min(res, nums[left]);
                break;
            }
            const int mid = (left + right) / 2;
            res = std::min(res, nums[mid]);
            if (nums[mid] >= nums[left]){
                // search right
                left = mid + 1;
            } else {
                // search left
                right = mid - 1;
            }
        }
        return res;
    }
};

