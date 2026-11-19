class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n -2;
        while (i >= 0 && nums[i] >= nums[i + 1]) {   // find breakpoiint
            i--;
        }
        if (i >= 0) {
            int j = n -1;
            while (nums[j] <= nums[i]){ // next greater element and swap
           j--;
        }
        swap(nums[i], nums[j]);
        } 
        reverse(nums.begin() + i + 1, nums.end());    // reerse the reaming element 
        
    }
}; 


//n - 2	Start from second-last index
//i >= 0	Ensure index is valid
//nums[i] >= nums[i+1]	Find breakpoint
//nums[j] <= nums[i]	Find next greater number
//swap()	Exchange two numbers
//reverse()	Make suffix ascending