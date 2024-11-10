#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int x, y, z;
    cin >> x >> y >> z;
    int a = x+(y/2), b = z+(y/2);
    a += 4-(x+y+z);
    
    if (a > b) cout << "YES" << nl;
    else cout << "NO" << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
