class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long long binform=n;
        if(binform==0 && x==1 ) return 1;
        if(x==0) return 0;
        if(x==-1 && binform%2==0) return 1;
        if(x==-1 && binform%2!=0) return -1;
        if(binform<0){
            x=1/x;
            binform=-binform;

        }
      while(binform>0){
            if(binform%2==1){
                ans*=x;
            }
            x=x*x;
            binform/=2; //ye upr tk binform ek digit pe kam hua ab usko update krke next digit pe jana h
        }
        return ans;

    }
};
