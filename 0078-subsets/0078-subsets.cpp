class Solution {
public:
void findsub(int ind,int sum,vector<int>&arr,vector<vector<int>>&ans,int n,vector<int>&ds){
    if(ind==n){
    ans.push_back(ds);
    return;    
    }
    ds.push_back(arr[ind]);//taking left recur
    findsub(ind+1,sum+=arr[ind],arr,ans,n,ds);
    ds.pop_back();
    //if not taking
    findsub(ind+1,sum,arr,ans,n,ds); 
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>ds;
        findsub(0,0,nums,ans,n,ds);
        return ans;
        
    }
};