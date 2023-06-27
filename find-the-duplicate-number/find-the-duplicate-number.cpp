class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//        //  float naturalsum;
//        //  int sum;
//        int n = nums.size();
//        //  naturalsum = n*(n+1)/2;
//        //  sum = accumulate(nums.begin(),nums.end(),0);    
//         int repeat , ans;
//        //  repeat = naturalsum-sum;
//        //  ans = n-repeat;
//        //  return ans;
        
//         for (int i =0 ; i<n-1 ; i++){
//             for (int j =i+1; j<n ;j++){
//                 if (nums[i]==nums[j])
//                      ans = nums[i];
//         }
//                     }
//         return ans;
        for(int i=0;i<nums.size();i++){
            int x = abs(nums[i]);
            if(nums[x] < 0){
                return x;
            }
            nums[x] = nums[x] * (-1);
        }
        return -1;
                   
    }
};