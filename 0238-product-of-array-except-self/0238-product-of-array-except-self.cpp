class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
      vector<int>ans(n);
      vector<int>prefix(n);
      prefix[0]=1;
      vector<int>suffix(n);
      suffix[n-1]=1;
      for(int i=1;i<nums.size();i++){
        prefix[i]=prefix[i-1]*nums[i-1];
       }
       for(int i=n-1;i>0;i--){
        suffix[i-1]=suffix[i]*nums[i];
       }
      for(int i=0;i<nums.size();i++){
        ans[i]=(prefix[i]*suffix[i]);
      }
      return ans;
    }
};