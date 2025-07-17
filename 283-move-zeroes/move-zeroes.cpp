class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int n = nums.size();
        int j = 0; 

        // placing all non-zero elements to the front 
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }

        // Filling remaining positions with 0
        while (j < n) {
            nums[j] = 0;
            j++;
        }

    }
};