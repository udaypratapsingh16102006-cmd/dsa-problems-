class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0,r=0;
        int n=s.size();
        long long count=0;
        if(n<3){
            return 0;
        }
        vector<int>freq(3,0);
        for(r=0;r<n;r++){
            freq[s[r]-'a']++;
            while(freq[0] && freq[1] && freq[2]){
                count+=n-r;
                freq[s[l]-'a']--;
                l++;

            }
        }
        return count;
    }
};