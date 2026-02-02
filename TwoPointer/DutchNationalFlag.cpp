class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Two Pointer (Same + Opposite Direction)
        int n=nums.size();
        int low=0;// Red
        int mid=0; // White
        int high=n-1; // Blue
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }else if(nums[mid]==1){
                mid++;
            }else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};