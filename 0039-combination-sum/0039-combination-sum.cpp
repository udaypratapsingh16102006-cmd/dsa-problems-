class Solution {
public:
void findcomb(int ind,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){
    if(ind==arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        findcomb(ind,target-arr[ind],arr,ans,ds);
        ds.pop_back();//to make sure that there i no element left in the ds in doing bcktrking;
    }
    findcomb(ind+1,target,arr,ans,ds);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findcomb(0,target,candidates,ans,ds);
        return ans;
    }
};