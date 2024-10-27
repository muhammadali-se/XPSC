#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int i = 1;
    while (i*c <= b) {
        if (i*c >= a && i*c <= b) {
            cout << i*c << nl;
            return;
        }
        i++;
    }
    cout << -1 << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
