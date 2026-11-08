// 1. Two Sum
// You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.
// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation:
// The sum of nums[0] and nums[1] is 2 + 7 = 9, which equals the target. Therefore, the indices [0, 1] are returned.
// Example 2:
// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Explanation:
// The sum of nums[1] and nums[2] is 2 + 4 = 6, which equals the target. Therefore, the indices [1, 2] are returned.
// Example 3:
// Input: nums = [3,3], target = 6
// Output: [0,1]
// Explanation:
// The sum of nums[0] and nums[1] is 3 + 3 = 6, which equals the target. Therefore, the indices [0, 1] are returned.


//Brute Force


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j]==target){
//                     return {i,j};
//                 }
//             }
//         }
//         return {};
//     }
// };


//Sorting


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<pair<int,int>> arr;
//         for(int i = 0; i < nums.size(); i++) {
//             arr.push_back({nums[i], i});
//         }
//         sort(arr.begin(), arr.end());
//         int i = 0;
//         int j = arr.size() - 1;
//         while(i < j) {
//             int x = arr[i].first + arr[j].first;
//             if(target == x) {
//                 return {arr[i].second, arr[j].second};
//             }
//             else if(x > target) {
//                 j--;
//             }
//             else {
//                 i++;
//             }
//         }
//         return {};
//     }
// };


//Hashing


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int> hm;
//         for(int i=0;i<nums.size();i++){
//             int c=target-nums[i];
//             if(hm.find(c)!=hm.end()){
//                 return {hm[c],i};
//             }
//             hm.insert({nums[i],i});
//         }
//         return {};
//     }
// };