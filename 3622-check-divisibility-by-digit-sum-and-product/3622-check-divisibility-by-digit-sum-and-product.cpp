class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int og = n;
      
        while(n >= 1){
            int d = n % 10;
            sum += d;
            product *= d;
            n /= 10;
        }
        
        if(og % (sum + product) == 0)
            return true;
        return false;
    }
};