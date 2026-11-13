class Solution {
public:
    int search(vector<int>& nums, int target) {  
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[low] <= nums[mid]) {                   // left half is sorted 
                if (target >= nums[low] && target < nums[mid]) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
            else {
                if (target > nums[mid] && target <= nums[high]) {   // right half is sorted
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }
        return -1;
      
    }
};  


// nums[low] <= nums[mid] → Left half is sorted.
//target >= nums[low] && target < nums[mid] → Target is in the left half.
//target > nums[mid] && target <= nums[high] → Target is in the right half.
//low <= high → Continue searching.