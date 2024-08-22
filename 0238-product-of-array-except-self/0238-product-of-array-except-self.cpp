class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> lpsum(n+1); lpsum[0] = 1;
        vector<int> rpsum(n+1); rpsum[0] = 1;
        for (int i = 1; i <= n; i++) {
            lpsum[i] = lpsum[i-1] * nums[i-1];
            rpsum[i] = rpsum[i-1] * nums[n-i];
        }

        vector<int> ans;
        for (int i = 0; i < n; i++) {
            ans.push_back(lpsum[i]*rpsum[n-i-1]);
        }

        return ans;
    }
};