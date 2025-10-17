class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAvg = INT_MIN;
        double windowSum = 0;
        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
            // 1 12 -5 -6
        }
        double avg= windowSum/k; 
        if(avg >= maxAvg){
            maxAvg=avg;
        }
        for (int i = k; i < nums.size(); i++) {
            windowSum= windowSum + nums[i] - nums[i - k];
            double newAvg=windowSum / k ;
            if(newAvg >=maxAvg){
                maxAvg=newAvg ;
            }
        }
        return maxAvg;
    }
};