class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int>seen;
        for(int x : arr){
            if(seen.count(2 * x)||(x%2==0 && seen.count(x/2))){//checking the doublity of the no
            return true;
            }
            seen.insert(x);//it is very necessary just cause we  have to store something in the set so that th value remains true after even some  mpre iterations rather it would only return falue if the condition remains false for the last condition 
        }
        
        return false;
    }
};