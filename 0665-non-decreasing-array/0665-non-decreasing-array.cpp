class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count = 0; // count how many modifications are needed
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) {
                count++;
                if (count > 1) return false; // more than one modification not allowed
                
                // Modify either nums[i-1] or nums[i] to make it non-decreasing
                if (i == 1 || nums[i] >= nums[i - 2]) {
                    nums[i - 1] = nums[i];  // lower previous element
                } else {
                    nums[i] = nums[i - 1];  // raise current element
                }
            }
        }
        return true;
    }
};
