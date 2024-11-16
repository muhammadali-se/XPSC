#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> us;
        
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x != 0) us.insert(x);
        }
        
        if (us.size() > 1) cout << "NO" << nl;
        else cout << "YES" << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
