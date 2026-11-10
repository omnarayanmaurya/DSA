75. Sort Colors
You are given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.
Example 1:
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Explanation:
The array has two 0s, two 1s, and two 2s. Sorting them in-place places all 0s first, then all 1s, then all 2s.
Example 2:
Input: nums = [2,0,1]
Output: [0,1,2]
Explanation:
The array has one each of 0, 1, and 2, arranged in-place in the order 0, 1, 2.
Constraints:
n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.
Follow up: Could you come up with a one-pass algorithm using only constant extra space?


//brute by vreating a seperate array take note making aseperate array is not allowed


class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> ans(nums.size(),1);
        int left=0;
        int right=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                ans[left]=0;
                left++;
            }else if(nums[i]==2){
                ans[right]=2;
                right--;
            }
        }
        nums=ans;
    }
};


//optimal


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start=0;
        int middle=0;
        int end=nums.size()-1;
        while(middle<=end){
            if(nums[middle]==2){
                swap(nums[middle],nums[end]);
                end--;
            }else if(nums[middle]==0){
                swap(nums[start],nums[middle]);
                start++;
                middle++;
            }else if(nums[middle]==1){
                middle++;
            }
        }
    }
};