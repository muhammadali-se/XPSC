#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    string s;
    cin >> s;
    if (s.size() == 3) s = '0'+s;
    else if (s.size() == 2) s = "00"+s;
    else if (s.size() == 1) s = "000"+s;
    cout << s << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}