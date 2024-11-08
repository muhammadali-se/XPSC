#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int opn, cls;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                opn = i;
                break;
            }
        }
        
        for (int i = n-1; i >= 0; i--) {
            if (s[i] == 'B') {
                cls = i;
                break;
            }
        }
        
        cout << (cls-opn)+1 << nl;
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}
