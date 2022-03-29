class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> res;
       map<int,int> mp;
       int size=nums.size();
       for (int i = 0; i < size; i++)
       {
           if(mp.find(target-nums[i])!=mp.end())
           {
               res.push_back(mp[(target-nums[i])]);
               res.push_back(i);
           }
           mp[nums[i]]=i;
       }
       return res;       
    }
};
