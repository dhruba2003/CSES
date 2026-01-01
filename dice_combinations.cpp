#include <bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    const int MOD = 1000000007;
    int n;
    if (!(cin >> n)) return 0;

    vector<int> dp(n+1);
    dp[0] = 1;
    for (int i = 1; i <= n; ++i) {
        long long ways = 0;
        for (int d = 1; d <= 6; ++d) {
            if (i - d >= 0) ways += dp[i-d];
        }
        dp[i] = (int)(ways % MOD);
    }

    cout << dp[n] << '\n';
    return 0;
}