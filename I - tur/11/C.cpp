#include <bits/stdc++.h>
using namespace std;

int mod[10][20];
long long dp[(1 << 20)][11];

void preComp(){
    mod[1][0] = 1;
    for(int i = 1; i < 20; i++){
        mod[1][i] = (mod[1][i - 1] * 10) % 11;
    }
    for(int i = 2; i < 10; i++){
        for(int j = 0; j < 20; j++){
            mod[i][j] = (mod[1][j] * i)  % 11;
        }
    }
}

long long solve(int mask, int pos, int len, int rem, int m){
    if(pos == -1){
        if(rem == m)    return 1;
        return 0;
    }
    if(dp[mask][rem] != -1)    return dp[mask][rem];
    long long res = 0;
    for(int i = 0; i <= 9; i++){
        if(pos == len - 1 and i == 0)   continue;
        if(mask & (1 << i)){
            res += solve(mask ^ (1 << i), pos - 1, len, (rem + mod[i][pos]) % 11, m);
        }
        else if(len == 20 and mask & (1 << (i + 10))){
            res += solve(mask ^ (1 << (i + 10)), pos - 1, len, (rem + mod[i][pos]) % 11, m);
        }
    }
    //cout << dp[mask][rem] << endl;
    return dp[mask][rem] = res;
}

int main(){
    preComp();
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        memset(dp, -1, sizeof(dp));
        cout << solve((1 << 20) - 1, n * 10 - 1, n * 10, 0, k) << endl;
    }
}
