class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        
    long start=0;long end =x/2;
    long ans=-1;

    while(start<=end){
        long mid=(start+end)/2;
        long sq=mid*mid;
        
        if(sq==x){
            return mid;
        }
        else if(sq<x){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
       return ans; 
    }
};