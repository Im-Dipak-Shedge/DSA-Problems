class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int prefix=0;
        unordered_map <int,int> map;
        map[0]= -1;
        for(int i=0;i<nums.size();i++){
           prefix+=nums[i];
           if(map.find(prefix%k) !=map.end()){
            if(i-map[prefix%k]>=2) return true;
           }
           else map[prefix%k] =i;
        }
        return false;
        
    }
};