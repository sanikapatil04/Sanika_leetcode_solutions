class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZero = 0;

        // Step 1: Move all non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[lastNonZero] = nums[i];
                lastNonZero++;
            }
        }

        // Step 2: Fill remaining positions with zeros
        for (int i = lastNonZero; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
