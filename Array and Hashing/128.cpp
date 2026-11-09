// 128. Longest Consecutive Sequence
// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
// You must write an algorithm that runs in O(n) time.
// Example 1:
// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
// Example 2:
// Input: nums = [0,3,7,2,5,8,4,6,0,1]
// Output: 9
// Example 3:
// Input: nums = [1,0,1,2]
// Output: 3
// Constraints:
// 0 <= nums.length <= 105
// -109 <= nums[i] <= 109


// //Brute Force


// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if(nums.empty())return 0;
//         int longest=1;
//         for(int i=0;i<nums.size();i++){
//             int x=nums[i];
//             int c=1;
//             while(find(nums.begin(),nums.end(),x+1)!=nums.end()){
//                 x++;
//                 c++;
//             }
//             longest=max(longest,c);
//         }
//         return longest;
//     }
// };


// // sorting
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int longest=0;
//         int curcon=0;
//         int last=INT_MIN;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]-1==last){
//                 curcon++;
//                 last=nums[i];
//             }
//             else if(nums[i]!=last){
//                 curcon=1;
//                 last=nums[i];
//             }
//             longest=max(longest,curcon);
//         }
//         return longest;
//     }
// };


// //optimal
