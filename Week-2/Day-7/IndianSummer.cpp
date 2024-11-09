#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t;
    cin >> t;
    set<string> s;
    
    while (t--) {
        string a, b;
        cin >> a >> b;
        s.insert(a+'_'+b);
    }
    
    cout << s.size() << nl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}
