#include<iostream>
#include<vector>
using namespace std;

vector<int>twoSum(vector<int>&nums,int target)
{
    int n=nums.size();
    int left=0,right=n-1;
    while(left<right)
    {
        int sum=nums[left]+nums[right];
        if(target == sum)
        return {left+1,right+1};
        else if(sum<target)
        left++;
        else
        right--;
    }
    return {};
}

/*
problem no:167 in LC
Approach: Use Two Pointers 
Time complexity : O(n)
Space complexity : O(1)
*/

int main()
{
    vector<int>nums={2,7,11,15};
    int target=9;
    vector<int>result = twoSum(nums,target);
    if(result.size()==2)
    cout<<result[0]<<","<<result[1];
    else
    cout<<"not found";
    return 0;
}