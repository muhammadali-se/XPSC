#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int n;
    cin >> n;
    set<string> Set;
    stack<string> st;
    
    while (n--) {
        string nam;
        cin >> nam;
        st.push(nam);
    }
    
    while (!st.empty()) {
        if (Set.find(st.top()) == Set.end()) cout << st.top() << nl;
        Set.insert(st.top());
        st.pop();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
