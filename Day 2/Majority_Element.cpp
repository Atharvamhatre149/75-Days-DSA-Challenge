class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int count=1;
     int ele=nums[0];
     int max=0;
     for (int i = 0; i < nums.size(); i++)
     {
         if(nums[i]==nums[max])
         {
             count++;
         }
         else{
             count--;
         }
     
     if(count==0)
     {
         ele=nums[i];
         max=i;
         count=1;

     }
     }
     return ele;
        
    }
};
