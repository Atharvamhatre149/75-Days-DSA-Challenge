class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size()-1;
        int i=0,j=n;
        vector<int> result(n+1);
        while (n>=0)
        {
            if(nums[i]*nums[i]>nums[j]*nums[j])
            {
                result[n--]=nums[i]*nums[i];
                i++;
            }
            else{
                result[n--]=nums[j]*nums[j];
                j--;
            }
        }
        return result;
        

    }
};
