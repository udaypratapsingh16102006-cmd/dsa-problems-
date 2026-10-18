class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int zeros=0;
        int l=0,r=0,len=0,maxlen=0;
       for(int r=0;r<n;r++){
        if(nums[r]==0){
            zeros++;
        }
        while(zeros>k){
            if(nums[l]==0){
                zeros--;
            }
            l++;
        }
        len=r-l+1;
        maxlen=max(len,maxlen);
       }
       return maxlen;
    }
};