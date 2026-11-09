// 229. Majority Element II
// Given an integer array of size n, find all elements that appear more than ⌊n / 3⌋ times.
// Example 1:
// Input: nums = [3,2,3]
// Output: [3]
// Example 2:
// Input: nums = [1]
// Output: [1]
// Example 3:
// Input: nums = [1,2]
// Output: [1,2]
// Constraints:
// 1 <= nums.length <= 5 * 104
// -109 <= nums[i] <= 109
// Follow up: Could you solve the problem in linear time and in O(1) space?


// //Brute
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         unordered_set<int> ans;
//         for(int i:nums){
//             int count=0;
//             for(int j:nums){
//                 if(i==j){
//                     count++;
//                 }
//             }
//             if(count>nums.size()/3){
//                 ans.insert(i);
//             }
//         }
//         return vector<int>(ans.begin(),ans.end());
//     }
// };


// //Hashing
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         vector<int> ans;
//        int n=nums.size()/3;
//         unordered_map<int,int> map;
//         for(int i:nums){
//             map[i]++;
//         }
//         for(auto j:map){
//             if(j.second>n){
//                 ans.push_back(j.first);
//             }
//         }
//         return ans; 
//     }
// };


// //Boyer-Moore Voting Algorithm
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         int e1=0,e2=0,c1=0,c2=0;
//         for(int n:nums){
//             if(c1==0&&e2!=n){
//                 e1=n;
//                 c1=1;
//             }
//             else if(c2==0&&e1!=n){
//                 e2=n;
//                 c2=1;
//             }
//             else if(e1==n){
//                 c1++;
//             }
//             else if(e2==n){
//                 c2++;
//             }
//             else{
//                 c1--;
//                 c2--;
//             }
//         }
//         c1 = 0;
//         c2 = 0;
//         for(int n : nums) {
//             if(n == e1) c1++;
//             else if(n == e2) c2++;
//         }
//         vector<int> ans;
//         int sz = nums.size();
//         if(c1 > sz/3) ans.push_back(e1);
//         if(c2 > sz/3) ans.push_back(e2);
//         return ans;
//     }
// };