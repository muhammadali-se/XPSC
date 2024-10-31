#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    int serejaScore = 0, dimaScore = 0;
    int left = 0, right = n - 1;
    bool isSerejaTurn = true;

    while (left <= right) {
        int pick;
        if (arr[left] > arr[right]) pick = arr[left++];
        else pick = arr[right--];

        if (isSerejaTurn) serejaScore += pick;
        else dimaScore += pick;

        isSerejaTurn = !isSerejaTurn;
    }

    cout << serejaScore << " " << dimaScore << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
