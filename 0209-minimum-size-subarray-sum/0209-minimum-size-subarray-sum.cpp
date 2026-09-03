class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int curr =0,ans = 1e8 ;
        int j =0;
        for(int i=0;i<n;i++){
            curr+= nums[i];
            while(j<=i && (curr - nums[j]) >= target){
                curr -=nums[j];
                j++;
            }
            if(curr>=target){
                ans = min(ans,i-j+1);
            }
        }
        return (ans==1e8 ? 0 : ans);
        
    }
};