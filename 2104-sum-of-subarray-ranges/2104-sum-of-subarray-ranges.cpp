class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        for(int i=0;i<n;i++){
            int sml=nums[i];
            int lrg=nums[i];
            for(int j=i;j<n;j++){
                sml=min(sml,nums[j]);
                lrg=max(lrg,nums[j]);
                sum+=(lrg-sml);
            }

        }
        return sum;
    }
};