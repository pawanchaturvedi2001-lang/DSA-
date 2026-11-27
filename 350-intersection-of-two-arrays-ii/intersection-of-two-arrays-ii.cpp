class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++) {      // counting frequjency of each element 
            mp[nums1[i]]++;
        }
        for(int j = 0; j < nums2.size(); j++) {   //  travelling nums2
            if (mp[nums2[j]] > 0) {                    // check element if exist
                ans.push_back(nums2[j]);    
                mp[nums2[j]]--;
            }
        }
        return ans;


        
    }
};