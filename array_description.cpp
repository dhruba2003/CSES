#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m)) return 0;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];
    vector<int> indices;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            indices.push_back(i);
    }
    int mod= 1e9+7;
    int ways=1;
    vector<vector<int>> dp(n, vector<int>(m+1,0));
    cout<<ways;
}