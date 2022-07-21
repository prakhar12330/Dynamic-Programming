//Recursive Approach
class Solution {
public:
    
    int solveRecurr(vector<int>& nums, int target)
    {
        //Base Case 
        if(target==0)return 1;
        if(target<0)return 0;
        
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=solveRecurr(nums,target-nums[i]);
        }
        return sum;
    }
    int combinationSum4(vector<int>& nums, int target)
    {
        return solveRecurr(nums,target);
    }
};
