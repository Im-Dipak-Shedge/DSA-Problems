class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int j = 0;
        int zeroCount = 0;
        for (int i=0; i < nums.size(); i++)  
        {
            if (nums[i] == 0) {
                zeroCount++;
            }
            if (zeroCount > k) {

                if (nums[j] == 0) {

                    zeroCount--;
                }
                j++;
            }
        }
        return nums.size()-j;
    }
};