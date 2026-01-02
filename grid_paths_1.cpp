#include <bits/stdc++.h>
using namespace std;

int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<vector<char>> grid(n, vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }

    vector<vector<int>> dp(n, vector<int>(n,0));
    dp[0][0] = 1;
    const int MOD = 1'000'000'007;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]=='*'){
                dp[i][j]=0;
            }
            else{
                if(i>0){
                    dp[i][j] += dp[i-1][j];
                    dp[i][j] %= MOD;
                }
                if(j>0){
                    dp[i][j] += dp[i][j-1];
                    dp[i][j] %= MOD;
                }
            }
        }
    }

    cout<<dp[n-1][n-1]%MOD;
    

}