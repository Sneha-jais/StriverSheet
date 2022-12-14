//leetcode link is :)
//https://leetcode.com/problems/sort-colors/submissions/

class Solution {
public:
    void sortColors(vector<int>& nums) {
         int n=nums.size();
        //sort(nums.begin(),nums.end());
        int low=0;
        int mid=0;
        int high=n-1;
       while(mid<=high){
           if(nums[mid]==0){
               swap(nums[low],nums[mid]);
               low++;
               mid++;
           }
           else if(nums[mid]==1){
                mid++;
           }
           else{
               swap(nums[high],nums[mid]);
               high--;
            
           }
       }
    }
};
