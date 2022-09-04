/*
Here is the link for the leetCode question :)
https://leetcode.com/problems/next-permutation/
*/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      
        /* In c++ we have an inbuilt function also for next or previous permutation
       next_permutation(begin(nums), end(nums));
       */
      
       int n=nums.size(),k,l;
        
        for(k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1])
                break;
        }
        if(k<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(l=n-1;l>k;l--){
                if(nums[l]>nums[k])
                    break;
            }
            swap(nums[k],nums[l]);
            reverse(nums.begin()+k+1,nums.end());
        }
      
    
       
    }
};
