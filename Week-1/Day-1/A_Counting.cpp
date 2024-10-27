#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main() {
    int a, b;
    cin >> a >> b;
    if (b-a < 0) cout << 0 << nl;
    else cout << (b-a)+1 << nl;
    return 0;
}