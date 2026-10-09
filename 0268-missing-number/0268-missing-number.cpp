class Solution {
public:
    int missingNumber(vector<int>& nums) {//this the loop traversal method which i had intution of without gpt
        int n =nums.size();
        int res=-1;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            if(nums[i]!=i){
                return i;  //this is for the conditon if no missing is between the normal indexing 
            }
        }
        return nums.size();//this is for the d=edge acse if the element missing is at the last index such that it return the last index 
    }
};