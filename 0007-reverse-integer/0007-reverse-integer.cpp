class Solution {
public:
    int reverse(int x) {
        long long ans=0;
        while(x!=0){
             int rem=x%10;
//we will check if our ans is goinf out of bounds after multiplying by 10..bcz once it goes out of bound then there is no sense of 
//comparing as it will show error ..so compare before error hapens
             if(ans>INT_MAX/10 || ans<INT_MIN/10){
            return 0;
            }
             ans= ans*10 + rem;
             x/=10;
            
        }
       
            return ans;
    
        }
};