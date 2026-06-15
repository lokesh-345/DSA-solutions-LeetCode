/*
problem no:16 in LC
Approach: sorting and Use Two Pointers (absolute difference is the closest)
Time complexity : O(n^2)
Space complexity : O(1)
*/



#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int bestSum = nums[0] + nums[1] + nums[2];
    for (int i = 0; i < nums.size(); i++) {
        int j = i + 1;
        int k = nums.size() - 1;
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (abs(target - sum) < abs(target - bestSum)) {
                bestSum = sum;
            }
            if (sum == target) {
                return sum;
            }
            else if (sum < target) {
                j++;
            }
            else {
                k--;
            }
        }
    }
    return bestSum;
}

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    cout <<threeSumClosest(nums, target);
    return 0;
}