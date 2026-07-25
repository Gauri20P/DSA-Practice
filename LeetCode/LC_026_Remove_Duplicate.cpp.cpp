class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int low=0;
        int high=1;
        int res=1;
        int n=nums.size();
        while(high<n){
            if(nums[high]==nums[high-1]){
                high++;
            }
            else{
                nums[++low]=nums[high];
                res++;
                high++;
            }
        }
        return res;
    }
};