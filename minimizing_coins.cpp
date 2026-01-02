#include<bits/stdc++.h>
using namespace std;

// int help(int amount, vector<int>& coins, vector<int>& dp){
//     if(amount==0) return 0;
//     if(dp[amount]!=1e9) return dp[amount];
//     for(int coin: coins){
//         if(amount-coin>=0){
//             dp[amount] = min(dp[amount], help(amount-coin, coins, dp)+1);
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
//     vector<int> dp(x+1, 1e9);
//     int ans = help(x, coins, dp);
//     (ans>=1e9)? cout<<-1 : cout<<ans;
// }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin>>n>>x;
    vector<int> coins (n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    vector<int> dp(x+1, 1e9);
    dp[0] = 0;
    for(int amount=1; amount<=x; amount++){
        for(int coin: coins){
            if(amount-coin>=0){
                dp[amount] = min(dp[amount], dp[amount-coin]+1);
            }
        }
    }
    (dp[x]>=1e9)? cout<<-1 : cout<<dp[x];
}