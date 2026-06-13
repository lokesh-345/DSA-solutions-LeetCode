/*
problem no:977 in LC
Approach: Use Two Pointers (the first largest comes from either rightmost or leftmost)
Time complexity : O(n)
Space complexity : O(n)
*/


vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    int index = n - 1;
    vector<int> result(n);
    int left = 0, right = n - 1;
    while (left <= right) {
        if (abs(nums[left]) > abs(nums[right])) {
            result[index] = nums[left] * nums[left];
            left++;
        }
        else {
            result[index] = nums[right] * nums[right];
            right--;
        }
        index--;
    }
    return result;
}