class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
          unordered_map<char,int>mpp;
        int r=0,l=0,maxlen=0,len=0;
        while(r<n){
            if(mpp.count(s[r])&& mpp[s[r]]>=l ){//means the elemetn is getiing repeated in the map 
            l=max(l,mpp[s[r]]+1);
            }
            len=r-l+1;
            maxlen=max(len,maxlen);
            mpp[s[r]]=r;
            r++;

        }
        return maxlen;
    }
};