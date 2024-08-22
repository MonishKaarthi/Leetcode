class Solution {
public:
    int maxArea(vector<int>& a) {
        int s = 0, f = a.size() - 1, sum = 0, max = 0, x;
    while (s < f && s < a.size() && f >= 0)
    {
        sum = (a[s] < a[f]) ? a[s] * (f - s) : a[f] * (f - s);
        max = sum > max ? sum : max;
        if (a[s] < a[f])
        {
            x = a[s];
            while (a[s] <= x && s < a.size())
                s++;
        }
        else
        {
            x = a[f];
            while (a[f] <= x&&f>0)
                f--;
        }
    }
    return max;
    }
};