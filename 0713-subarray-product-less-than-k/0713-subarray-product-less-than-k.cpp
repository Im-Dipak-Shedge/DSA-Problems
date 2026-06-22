class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // Edge case: since nums contains positive integers (>= 1),
        // a product strictly less than 1 is impossible.
        if (k <= 1) return 0;
        
        int count = 0;
        int product = 1;
        int left = 0;
        
        // Expand the window using the right pointer
        for (int right = 0; right < nums.size(); right++) {
            product *= nums[right];
            
            // Shrink the window from the left if the product is too large
            while (product >= k) {
                product /= nums[left];
                left++;
            }
            
            // The number of valid subarrays ending at 'right' is equal to the window size
            count += (right - left + 1);
        }
        
        return count;
    }
};
