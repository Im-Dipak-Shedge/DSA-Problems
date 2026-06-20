class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int maxArea = 0;

        while (l < r) {
            int calc = min(height[l], height[r])* (r - l);
            maxArea = max(calc, maxArea);
            if (height[l] < height[r]) {
                l++;
            } else
                r--;
        }

        return maxArea;
    }
};