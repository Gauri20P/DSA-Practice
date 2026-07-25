class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        for(int i =0; i<nums.size()-1;i++){
            int mini=i;
            for(int j=i+1;j<=nums.size()-1;j++){
                if(nums[mini]>nums[j])
                mini=j;
            }
            swap(nums[i],nums[mini]);
        }
        return nums;
    }
};
