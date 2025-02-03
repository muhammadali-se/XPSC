#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int x, y; cin >> x >> y;
    int ans = (y+1)/2;
    int rem = y/2 * 7 + y%2 *11;
    x = max(0, x-rem);
    ans += (x+14)/15;
    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while (t--) solution();
    
    return 0;
}
