169. Majority Element
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
Example 1:
Input: nums = [3,2,3]
Output: 3
Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2
Constraints:
n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
The input is generated such that a majority element will exist in the array.
Follow-up: Could you solve the problem in linear time and in O(1) space?


//Brute
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int i:nums){
            int count=0;
            for(int j:nums){
                if(i==j){
                    count++;
                }
            }
            if(count>nums.size()/2){
                return i;
            }
        }
        return -1;
    }
};


//Hashing
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map<int,int> map;
        for(int i:nums){
            map[i]++;
        }
        for(auto j:map){
            if(j.second>n){
                return j.first;
            }
        }
        return -1;
    }
};


//Boyer-Moore Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        int count=0;
        int element=0;
        for(int i:nums){
            if(count==0){
                element=i;
            }
            if(i==element){
                count++;
            }
            if(i!=element){
                count--;
            }
        }
        int c=0;
        for(int j:nums){
            if(j==element){
                c++;
            }
        }
        if(c>n){
            return element;
        }
        return -1;
    }
};