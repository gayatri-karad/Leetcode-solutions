class Solution {
public:
    bool isPalindrome(int x) {
        int var=x;
        long rev=0;
        while(x>0){
            int dig=x%10;
            rev=(rev*10)+dig;
            x/=10;
        }
        if(rev==var){
            return true;
        } 
        return false;

    }
};
