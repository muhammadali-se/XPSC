#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n, m; cin >> n >> m;
    vector<vector<int>> board(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> board[i][j];
    }

    unordered_map<int, long long> mainDiagSum;
    unordered_map<int, long long> antiDiagSum;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            mainDiagSum[i-j] += board[i][j];
            antiDiagSum[i+j] += board[i][j];
        }
    }

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            long long curSum = mainDiagSum[i-j] + antiDiagSum[i+j] - board[i][j];
            ans = max(ans, curSum);
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) solution();
    
    return 0;
}
