class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod, max_prod = 0;
   
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(i != j){
                    prod = (nums[i]-1)*(nums[j]-1);
                    max_prod = max(max_prod, prod);
                }
            }
        }
        return max_prod;
    }
};