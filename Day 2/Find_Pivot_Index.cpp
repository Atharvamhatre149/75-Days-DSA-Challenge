class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum+=nums[i];
        }
       
        int numsright=0;
        sum-=nums[0];
         if(sum==0) return 0;
        for (int i = 1; i < nums.size(); i++)
        {
            numsright+=nums[i-1];
            sum-=nums[i];
            if(numsright==sum)
            {
                return i;
            }

        }
         if(numsright==0)  return nums.size()-1;
        return -1;
        
    }
};
