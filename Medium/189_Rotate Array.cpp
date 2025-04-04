/*Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]*/
//time limit exceeding
/*int n=nums.size();
        k = k % n; // Prevent unnecessary full rotations

        while (k--){
            int temp=nums[n-1];
            for (int i=n-1;i>0;i--){
                nums[i]=nums[i-1];
            }
            nums[0]=temp;
        }*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n=nums.size();
      k=k%n;
       reverse(nums,0,n-1);//reverse whole array
       reverse(nums,0,k-1);//to reverse k elements from start
       reverse(nums,k,n-1);//to reverse remasining elements till last
    }
    void reverse(vector<int>& nums, int start, int end){
        while (start<end){
            swap(nums[start],nums[end]);
            end--;
            start++;
        }}
};

