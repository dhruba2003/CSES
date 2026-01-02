#include<bits/stdc++.h>
using namespace std;

int help(int amount, vector<int>& coins, vector<int>& dp){
    if(amount==0) return 1;
    if(dp[amount]!=-1) return dp[amount];
    long long ways = 0;
    for(auto coin: coins){
        if(amount-coin>=0){
            ways += help(amount-coin, coins, dp);
            ways %= 1000000007;
        }
    }
    return dp[amount] = ways;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin>>n>>x;
    vector<int> coins (n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }

    const int MOD = 1000000007;
    vector<int> dp(x+1,-1);
    int ans = help(x, coins, dp);
    cout<<ans%MOD;
}