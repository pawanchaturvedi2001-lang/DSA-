class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int currentEnd = 0;
        int farthest = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            farthest = max(farthest, i + nums[i]);
            if (i == currentEnd) {
                jumps++;
                currentEnd = farthest;
            }
        }
        return jumps;
        
    }
};      
   // jumps = how many times did i jump
   // currentEnd = how far does my current jump go
   // farthest = what is farthest postion i can reach from this range
   // farthest = max (0, 0 + 2)   fror index 0