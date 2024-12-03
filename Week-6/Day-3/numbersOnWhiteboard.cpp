#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int n; cin >> n;
    priority_queue<int> pq;
    vector<pair<int, int>> arr;
    
    for (int i = n; i > 0; i--) pq.push(i);
    
    while (pq.size() > 1) {
        int a, b;
        
        a = pq.top();
        pq.pop();
        b = pq.top();
        pq.pop();
        
        pq.push((a+b+1)/2);
        arr.push_back({a, b});
    }
    
    cout << pq.top() << nl;
    for (auto [a, b]: arr) cout << a << ' ' << b << nl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while (t--) solution();
	
	return 0;
}