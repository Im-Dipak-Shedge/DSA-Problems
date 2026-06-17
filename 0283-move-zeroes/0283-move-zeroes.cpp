class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == 0)//if element is zero
            {
                continue;
            }
            else {//if element is zero
                swap(nums[i],nums[count]);
                count++;
            }
        }


    }
};