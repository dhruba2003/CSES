// #include<bits/stdc++.h>
// using namespace std;    

// int help(int amount, vector<int>& coins, vector<int>& dp, const int MOD){
//     if(amount==0) return 1;
//     if(dp[amount]!=-1) return dp[amount];
//     for(auto coin: coins){
//         if(amount-coin>=0){
//             dp[amount] += help(amount-coin, coins, dp, MOD);
//             dp[amount] %= MOD;
//         }
//     }
//     return dp[amount];
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n,x;
//     cin>>n>>x;
//     vector<int> coins (n);
//     for(int i=0;i<n;i++){
//         cin>>coins[i];
//     }
//     const int MOD = 1000000007;
//     vector<int> dp(x+1,-1);
//     int ans = help(x, coins, dp, MOD);
//     cout<<ans%MOD;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    if (!(cin >> n >> x)) return 0;
    vector<int> coins(n);
    for (int i = 0; i < n; ++i) cin >> coins[i];

    const int MOD = 1'000'000'007;
    vector<int> dp(x + 1, 0);
    dp[0] = 1;

    for (int coin : coins) {
        for (int v = coin; v <= x; ++v) {
            dp[v] = (dp[v] + dp[v - coin]) % MOD;
        }
    }

    cout << dp[x] << '\n';
    return 0;
}