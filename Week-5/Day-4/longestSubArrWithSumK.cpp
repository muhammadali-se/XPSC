class Solution {
public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        int n = arr.size(), mx = 0, cur = 0, i = 0;
        map<long long, int> mp;
        vector<long long> pre(n+1);
        
        for (int i = 1; i <= n; i++) {
            pre[i] = arr[i-1]+pre[i-1];
            mp[pre[i]] = i;
        }
        
        while (i < n) {
            long long tar = k+pre[i];
            auto it = mp.find(tar);
            
            if (it != mp.end()) {
                int j = it->second;
                cur = j-i;
                mx = max(mx, cur);
            }
            i++;
        }
        
        return mx;
    }
};
