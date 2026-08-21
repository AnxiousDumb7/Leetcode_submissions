class Solution {
public:
    int fib(int n) {
        //int first = 0, second = 1, third;
        //if(n == 0) return 0;
        //if(n == 1) return 1;
//
        //for (int i = 2; i <= n; i++){
        //    third = first + second;
        //    first = second;
        //    second = third;
        //}
        //return second;


    // recursive menthod
        if(n == 0) return 0;
        if(n == 1) return 1;
        
        return fib(n-1) + fib(n-2);
    }
};