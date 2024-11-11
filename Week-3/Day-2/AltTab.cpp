#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t;
    cin >> t;
    stack<string> st;
    
    while (t--) {
        string s;
        cin >> s;
        st.push(s);
    }
    
    set<string> Set;
    string ans;
    while (!st.empty()) {
        if (Set.count(st.top()) == 0) ans = ans + st.top()[st.top().size()-2] + st.top()[st.top().size()-1];
        Set.insert(st.top());
        st.pop();
    }
    
    cout << ans << nl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    solution();
    return 0;
}
