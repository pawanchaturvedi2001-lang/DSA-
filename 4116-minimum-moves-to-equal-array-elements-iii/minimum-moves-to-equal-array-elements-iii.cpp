class Solution {
public:
    int minMoves(vector<int>& nums) {
      int Element = *max_element(nums.begin(), nums.end());
       int operation = 0;
       for(int i = 0; i < nums.size(); i++) {
        operation += Element - nums[i];
       }  
        return operation;
        
    }
};