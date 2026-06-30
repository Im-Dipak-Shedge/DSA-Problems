class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0;
        int prefixsum=0;
        unordered_map<int,int> freq;
        freq[0]= 1;
        for (int i = 0; i < nums.size(); i++) {
            prefixsum += nums[i];
            int rem = prefixsum%k;
            if(rem<0) rem+=k;
            if(freq.count(rem))
            {
                count+= freq[rem];
            }
             freq[rem]++;
            
        }
        return count;
    }
};