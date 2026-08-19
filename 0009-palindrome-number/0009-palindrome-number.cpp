class Solution {
public:
    bool isPalindrome(int x) {
        //int rev = 0;
        //int ognl = x;
        //while ( x > 0){  // negative number doesn't reverse the same
        //    int rem = x % 10;  
        //    x /= 10;  
        //    //Check whether multiplying rev by 10 would exceed the 32-bit integer range before actually performing the multiplication.
        //    if (rev > INT_MAX/10 || rev < INT_MIN/10)
        //    {
        //        return 0; 
        //    }
        //    rev = (rev * 10) + rem;  // append reverse
        //}
        //if (ognl == rev){  // compare reverse to original
        //        return true;
        //    }
        //else return false;
       
        if(x < 0)
            return false;
        vector<int> v;
        while(x){
            v.push_back(x % 10);
            x /= 10; 
        }
        
        int left = 0;
        int right = v.size()-1;
        
        return palindrome(v, left, right);
    }
    
    bool palindrome(vector<int> &v, int left, int right){
        if(left >= right){
            return true;
        }
        if(v[left] != v[right]){
            return false;
        }
        return palindrome(v, left+1, right-1);
    }
};