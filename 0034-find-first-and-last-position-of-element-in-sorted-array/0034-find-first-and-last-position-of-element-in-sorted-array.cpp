class Solution {
public:
    vector<int> searchRange(vector<int>& a, int t) {
        vector<int> res(2, -1);
        int s = a.size();
        for(int i = 0; i < s; i++) {
            if(a[i] == t) {
                if(res[0] == -1) { 
                    res[0] = i;
                }
                res[1] = i; 
            }
        }
        
        return res;
    }
};