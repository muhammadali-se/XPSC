#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        
        for (int i = 0; i < n; i++) {
            if (a[i] == 'B') a[i] = 'G';
            if (b[i] == 'B') b[i] = 'G';
        }
        
        if (a == b) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}
