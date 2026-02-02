class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        int left=0;
        int right=n-1;
        while(left < right){
            int res=min(arr[left],arr[right])*(right-left);
            ans=max(ans,res);
            if(arr[left]<=arr[right]){
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }
};