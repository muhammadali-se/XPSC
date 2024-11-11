#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a[n], b[n], c[n];
        map<string, int> mp;
        
        for (int j = 0; j < 3; j++) {
            for (int i = 0; i < n; i++) {
                string s;
                cin >> s;
                
                if (j == 0) a[i] = s;
                if (j == 1) b[i] = s;
                if (j == 2) c[i] = s;
                
                if (mp.count(s) == 0) mp[s] = 1;
                else mp[s]++;
            }
        }
        
        int x = 0, y = 0, z = 0;
        
        for (int i = 0; i < n; i++) {
            if (mp[a[i]] == 1) x += 3;
            else if (mp[a[i]] == 2) x += 1;
        }
        
        for (int i = 0; i < n; i++) {
            if (mp[b[i]] == 1) y += 3;
            else if (mp[b[i]] == 2) y += 1;
        }
        
        for (int i = 0; i < n; i++) {
            if (mp[c[i]] == 1) z += 3;
            else if (mp[c[i]] == 2) z += 1;
        }
        
        cout << x << ' ' << y << ' ' << z << nl;
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    solution();
    return 0;
}
