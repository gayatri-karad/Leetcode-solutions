class Solution {
public:
    void sortColors(vector<int>& nums) {
    //by Dutch National Flag Algorithm..we can sort it in O(n) time complexity but only with a single pass...previoulsy the time complexity
    //was same same but we had to give two passes (pass means loop) 
    int low=0;
    int mid=0;
    int high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
         }else if(nums[mid]==1){
            mid++;
         }else {
            swap(nums[high],nums[mid]);
            high--;
         }
    }
    }
};