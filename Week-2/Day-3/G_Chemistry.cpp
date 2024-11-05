#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        
        int frq[26] = {0};
        for (char c: s) frq[c-'a']++;
        
        int cnt = 0;
        for (int i = 0; i < 26; i++) {
            if (frq[i]%2 != 0) cnt++;
        }
        
        if (cnt <= k+1) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}
