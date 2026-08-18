class Solution {
public:
    double myPow(double x, int n) {
        //long num = n;
        //if(num < 0){
        //    x = 1/x;
        //    num = -num;
        //}
        //    double ans = 1;
        //while(num > 0){
        //    if(num % 2 != 0){
        //        ans *= x;
        //    }
        //    x *= x;
        //    num /= 2;
        //}
        //return  ans;

        long num = n;
        if(num < 0){
            x = 1/x;
            num = -num;
        }
        return power(x, num, 1);
    }
    double power(double x, long n, double ans){
        if(n == 0){
            return ans;
        }
        if(n % 2 != 0){
            ans *= x;
        }
        return power(x*x, n/2, ans);
    }
};