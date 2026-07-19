class Solution {
public:
    vector<vector<int>> ans;
    vector<int> subset;

    void solve(vector<int>& nums, int index) {
        ans.push_back(subset);

        for (int i = index; i < nums.size(); i++) {
            subset.push_back(nums[i]);   // Choose
            solve(nums, i + 1);          // Explore
            subset.pop_back();           // Backtrack
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums, 0);
        return ans;
    }
};