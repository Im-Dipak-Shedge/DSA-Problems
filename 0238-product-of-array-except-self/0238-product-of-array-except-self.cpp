class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int> result(nums.size(),1);;
      
       result[0] = 1;
       for(int i =1 ; i<nums.size();i++)
       {
        result[i] = result[i-1]*nums[i-1];
       } 
        int rproduct = 1;
       for(int j =nums.size()-1; j>=0;j--)
       {
        result[j] = result[j]*rproduct;
        rproduct *= nums[j];

       } 
       return result;
    }
};