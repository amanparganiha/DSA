class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> rotated(n);

        // Adjust k if it's greater than array size
        k = k % n;

        for (int i = 0; i < n; i++) {
            rotated[(i + k) % n] = nums[i];
        }

        // store back to in the original array
        for (int i = 0; i < n; i++) {
            nums[i] = rotated[i];
        }
    }
};