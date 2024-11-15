#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        map<int, set<int>> mp;
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x].insert(i);
        }
        
        while (k--) {
            int a, b;
            cin >> a >> b;
            
            if ((mp.find(a) == mp.end()) || (mp.find(b) == mp.end())) cout << "NO" << nl;
            else {
                int SSLMI = *mp[a].begin(), ESRMI = *mp[b].rbegin();
                
                if (SSLMI < ESRMI) cout << "YES" << nl;
                else cout << "NO" << nl;
            }
        }
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}