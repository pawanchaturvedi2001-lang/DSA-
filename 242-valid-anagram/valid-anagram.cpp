class Solution {
public:
    bool isAnagram(string s, string t) { 
        unordered_map<char, int>mp;
        if (s.size() != t.size()) {              // Step 1: Check string lengths
            return false;
        }
        for(int i = 0; i < s.size(); i++) {            
        // Step 2: Count characters in s
            mp[s[i]]++;
        }
        for(int i = 0; i < t.size(); i++) {     
        // Step 3: Decrease frequency using t
            if (mp[t[i]] == 0) {
                return false;
            }
            mp[t[i]]--;
        }
        return true;
    }
};    


    // An Anagram means two words or strings contain exactly the same characters with the same frequency, but their order is different.