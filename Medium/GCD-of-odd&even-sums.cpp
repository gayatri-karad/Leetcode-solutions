class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        
        int sumOdd=0;
        for(int i=1;i<=2*n;i+=2){
            sumOdd+=i;
        }
        cout<<"odd sum "<<sumOdd;
        cout<<endl;

        int sumEven=0;
        for(int i=0;i<=2*n;i+=2){
            sumEven+=i ;
        }
        cout<<"even sum "<<sumEven;
        cout<<endl;

        int div=1;
        int a=min(sumOdd, sumEven);
        for(int i=1;i<=a;i++){
            if(sumOdd%i==0 && sumEven%i==0){
                div=i;
            }
        }
        
        return div;
    }
};
