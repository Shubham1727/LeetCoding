class Solution {
public:
    void combination(int idx ,vector<int>& arr, int target ,vector<int> &ds , vector<vector<int>>& ans){
        if(idx == arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
            if(arr[idx]<=target){
                ds.push_back(arr[idx]);
                combination(idx , arr , target-arr[idx],ds,ans);
                ds.pop_back();
            }
            combination(idx+1 ,arr,target, ds, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        combination(0,candidates,target,ds,ans);
        return ans;
    }
};