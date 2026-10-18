class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
          vector<int>hash(256,-1);
        int r=0,l=0,maxlen=0,len=0;
        while(r<n){
            if(hash[s[r]]!=-1 ){//means the elemetn is getiing repeated in the map 
            l=max(l,hash[s[r]]+1);
            }
            len=r-l+1;
            maxlen=max(len,maxlen);
            hash[s[r]]=r;
            r++;

        }
        return maxlen;
    }
};