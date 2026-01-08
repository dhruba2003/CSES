#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m)) return 0;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (i + 1 <= n) {
                dp[i + 1][j] = (dp[i + 1][j] + dp[i][j]) % 1000000007;
            }
            if (j + 1 <= m) {
                dp[i][j + 1] = (dp[i][j + 1] + dp[i][j]) % 1000000007;
            }
        }
    }

    cout << dp[n][m] << '\n';
    return 0;
}