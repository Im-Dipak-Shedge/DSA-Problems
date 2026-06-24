class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minSize = nums.size();
        int sum = 0;
        int left = 0;
        bool changed = false;
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while(sum >= target) {
            minSize = min(minSize, right - left+1);
                sum -= nums[left];
                left++;
                changed= true;
            }
        }
        if(changed) return minSize;
        else return 0;
    }
};