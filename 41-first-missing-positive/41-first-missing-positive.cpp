class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=(int)nums.size(),c=0,mn=INT_MAX;

        //set the elements which are out of range
        for(int i=0;i<n;i++)
        {
            if(nums[i]<=0)
                nums[i]=n+1;
        }
        //
        for(int i=0;i<n;i++){
            if(abs(nums[i])<=n and nums[abs(nums[i])-1]>0)
                nums[abs(nums[i])-1]*=-1;
        }
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
                return i+1;
        }
         return n+1;
    }
};