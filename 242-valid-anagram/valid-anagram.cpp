class Solution {
public:
    bool isAnagram(string s, string t) { 
        unordered_map<char, int>mp;
        if (s.size() != t.size()) {              // Step 1: Check string lengths
            return false;
        }
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        for(int i = 0; i < t.size(); i++) {
            if (mp[t[i]] == 0) {
                return false;
            }
            mp[t[i]]--;
        }
        return true;
    }
};