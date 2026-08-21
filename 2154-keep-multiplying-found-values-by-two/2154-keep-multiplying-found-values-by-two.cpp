class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
    unordered_set<int>found(nums.begin(),nums.end());
    for(int x: nums){
        if(found.count(original)){
            original=original*2;
        }
        
    }
        return original;
    }
};