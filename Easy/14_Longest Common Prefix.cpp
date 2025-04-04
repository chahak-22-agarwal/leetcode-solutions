/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if (strs.empty()) return "";
        int n=strs.size();
        int m =strs[0].size();
       for (int j=0;j<m;j++){
        char c=strs[0][j];//f hei 
       
       for (int i=1;i<n;i++){
        if (j>=strs[i].size() || strs[i][j]!=c)
       { return strs[0].substr(0, j);}

       }
       }
      return strs[0];
    }
};
