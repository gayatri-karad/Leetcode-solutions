class Solution {
public:
    bool isPalindrome(int x) {
// find reverse and compare it with og number 
int og=x;
int revnum=0;
while(x!=0){
    int dig=x%10;
      if(revnum>INT_MAX/10 || revnum<INT_MIN/10){
            return false;
            }
    revnum=(revnum*10) + dig;
    x=x/10;
}
if(revnum==og && revnum>=0){
    return true;
}
else {
    return false;
}
    }
};