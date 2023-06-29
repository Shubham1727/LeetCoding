class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele ;
        int count = 0;
        int n = nums.size();
        for(int i =0 ; i<n ; i++){
            if(count == 0){
                ele = nums[i];
                count=1;
            }
            else if(ele == nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int count2=0;
        for(int i =0 ;i <n ;i++){
            if(nums[i]==ele) count2++;
        }
        if(count2>(n/2)) return ele;
        
        return -1;
    }
};