/*Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

 

Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
Example 2:

Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]*/
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());//to arot an array
        int n=nums.size();
        vector<vector<int>> result;
        for(int i=0;i<n-3;i++){
             if(i>0&& nums[i]==nums[i-1]){
                    continue;
                }
            for(int j=i+1;j<n-2;j++){
                int left=j+1 ,right=n-1;
                if(j>i+1&& nums[j]==nums[j-1]){
                    continue;
                }
               
                while (left<right){
                 long long sum=(long long)nums[left]+nums[right]+nums[i]+nums[j];
                    if(sum==target){
                        result.push_back({nums[i],nums[j], nums[left], nums[right]});
                         // Move left and right to skip duplicate values
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                } 
                else if (sum < target) {
                    left++; // Increase sum by moving left pointer
                } 
                else {
                    right--; // Decrease sum by moving right pointer
                }
                    }
                }

            }
        
        return result;
    }
};
