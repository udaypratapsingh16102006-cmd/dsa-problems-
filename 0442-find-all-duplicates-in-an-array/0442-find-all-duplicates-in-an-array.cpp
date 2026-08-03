class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    unordered_set<int>visited;
    vector<int>ans;
    for(int x: nums){
        if(visited.count(x))
        ans.push_back(x);
        else{
            visited.insert(x);
        }
    }
    return ans;
    }
};