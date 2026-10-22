class Solution {
public:
    void sortColors(vector<int>& nums) {
    //we can do by brute force using sort(nums.begin(), nums.end()) which has time complexity of nlogn but this isnt allowed
    int czero=0;
    int cone=0;
    int ctwo=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            czero++;
        }
        if(nums[i]==1){
            cone++;
        }
        if(nums[i]==2){
            ctwo++;
        }
    }
       for(int i=0;i<czero;i++){
        nums[i]=0;
       } 
       for(int i=czero;i<czero+cone;i++){
        nums[i]=1;
       } 
       for(int i=czero+cone;i<czero+cone+ctwo;i++){
        nums[i]=2;
       } 
    }
};