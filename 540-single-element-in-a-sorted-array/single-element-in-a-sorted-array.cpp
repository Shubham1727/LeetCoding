class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int count = 2;
        int temp , i=0 ;
        while(i<nums.size()-1){
            if(nums[i]!=nums[i+1]) break;
            i=i+2;
        } 
        return nums[i];
    }
};