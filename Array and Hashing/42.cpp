// 42. Trapping Rain Water
// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
// Example 1:
// Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6
// Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
// Example 2:
// Input: height = [4,2,0,3,2,5]
// Output: 9
// Constraints:
// n == height.length
// 1 <= n <= 2 * 104
// 0 <= height[i] <= 105


// class Solution {
// public:
//     int trap(vector<int>& height) {
//         vector<int> left(height.size(),0);
//         vector<int> right(height.size(),0);
//         left[0] = height[0];
//         right[height.size()-1] = height[height.size()-1];
//         for(int i = 1; i < height.size(); i++) {
//             left[i] = max(left[i-1], height[i]);
//         }
//         for(int j = height.size()-2; j >= 0; j--) {
//             right[j] = max(right[j+1], height[j]);
//         }
//         int ans=0;
//         for(int l=0;l<height.size();l++){
//             ans+=min(left[l],right[l])-height[l];
//         }
//         return ans;
//     }
// };