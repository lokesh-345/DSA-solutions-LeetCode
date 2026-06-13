/*
problem no:15 in LC
Approach: sorting and Use Two Pointers 
Time complexity : O(n^2)
Space complexity : O(1)
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1])continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0) {
                result.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1])
                j++;
                while (j < k && nums[k] == nums[k + 1])
                k--;
            }
            else if (sum < 0)
            j++;
            else
            k--;
        }
    }
    return result;
}



int main()
{
    vector<int>nums={-1,0,1,2,-1,-4};
    vector<vector<int>>res=threeSum(nums);
    for(int i=0;i<res.size();i++)
    {
        cout<<"[";
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j];
            if(j<res[i].size()-1)
            cout<<",";
        }
        cout<<"]"<<endl;
    }
    return 0;
}