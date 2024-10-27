#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int a, b;
    cin >> a >> b;
    int res = 0;
    
    int i = 2;
    while (i--) {
        if (a == b) {
            res += a;
            a--;
        } else {
            res += max(a, b);
            if (a > b) a--;
            if (a < b) b--;
        }
    }
    
    cout << res << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
