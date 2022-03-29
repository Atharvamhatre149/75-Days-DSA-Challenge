class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero=0,i=0,start=0;
        while (i<nums.size())
        {
            if(nums[i])
            {
                nums[start]=nums[i];
                start++;
            }
            else{
                zero++;
            }
            i++;
        }
        while (start<nums.size())
        {
            nums[start]=0;
            start++;
        }
        
        
    }
};
