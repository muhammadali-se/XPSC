#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int a, b, n; cin >> a >> b >> n;
    long long ans = b-1;
    int c = 1;
    
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        ans = ans + min(c+x, a)-1;
    }
    
    cout << ans+1 << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while (t--) solution();
    
    return 0;
}
