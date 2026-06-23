class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> freq;
        int left = 0;
        int maxCount = 0;

        for (int right = 0; right < fruits.size(); right++) {
            // 1. Add the current fruit to our basket
            freq[fruits[right]]++;

            // 2. If we have more than 2 types of fruit, shrink the window from the left
            while (freq.size() > 2) {
                freq[fruits[left]]--;     // Reduce count of the leftmost fruit
                if (freq[fruits[left]] == 0) {
                    freq.erase(fruits[left]); // CRITICAL: Erase the key so freq.size() decreases
                }
                left++;                   // Move the left edge inward
            }

            // 3. The current valid window size is (right - left + 1)
            maxCount = max(maxCount, right - left + 1);
        }

        return maxCount;
    }
};
