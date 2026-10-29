class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0; 
        int right = numbers.size() -1;
        while(left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                return {left + 1, right + 1};  // in this line indices start at 0 but we have to add one more in indces 
            } 
            else if (sum < target) {
                left++;
            } 
            else { 
             right--; 
            }
        }
         return {};
        
      }
   };