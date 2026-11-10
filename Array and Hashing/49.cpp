Given an array of strings strs, group the anagrams together. You can return the answer in any order.
Example 1:
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Explanation:
There is no string in strs that can be rearranged to form "bat".
The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.
Example 2:
Input: strs = [""]
Output: [[""]]
Example 3:
Input: strs = ["a"]
Output: [["a"]]
Constraints:
1 <= strs.length <= 104
0 <= strs[i].length <= 100
strs[i] consists of lowercase English letters.


// sorting


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.empty()){
            return {};
        }
        unordered_map<string,vector<string>> map;
        for(string str:strs){
            string s=str;
            sort(s.begin(),s.end());
            map[s].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto it:map){
            ans.push_back(it.second);
        }
        return ans;
    }
};


// frequency count


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (string str : strs) {
            // counting the freq of letters
            int freq[26] = {0};
            for (char c : str) {
                freq[c - 'a']++;
            }
            // appending it to a string
            string key = "";
            for (int i = 0; i < 26; i++) {
                if (freq[i] > 0) {
                    key += char('a' + i);
                    key += to_string(freq[i]);
                }
            }
            // storing all strings in hash
            mp[key].push_back(str);
        }
        // final list
        vector<vector<string>> ans;
        for (auto it : mp) {
            ans.push_back(it.second);
        }
        return ans;
    }a
};
