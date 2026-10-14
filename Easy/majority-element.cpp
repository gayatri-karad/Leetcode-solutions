class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int n=nums.size();
     int freq=0;
     int ans=nums[0];
     for(int i=0;i<n;i++){
        if(freq==0){    
            ans=nums[i];//new element ko ans me store krdiya
        }
        if(ans==nums[i]){
            freq++;
            ans=nums[i];
        } else{
            freq--;
        }
        
        }
         
        return ans;
    }
};
