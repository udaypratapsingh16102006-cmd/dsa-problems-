class Solution {
public:
    int missingNumber(vector<int>& nums) {//putting up the sum intution in the problem 
        int n =nums.size();
        int actual_sum=0;
        int sum=n*(n+1)/2;
        int res=-1;
        for(int i=0;i<n;i++){

            actual_sum= actual_sum + nums[i];
        }
         res= sum - actual_sum;
        return res;
    }
};