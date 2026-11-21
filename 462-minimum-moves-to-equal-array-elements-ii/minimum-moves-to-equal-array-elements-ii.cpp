class Solution {
public:
    int minMoves2(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      int median = nums[nums.size() / 2];
      int operation = 0;
      for (int i = 0; i < nums.size(); i++) {
        operation += abs(nums[i] - median);
      }
      return operation;
        
    }
};

 // abs = means absolute value it convert a negative number into a postive number