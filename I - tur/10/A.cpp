#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<int>dp(16 , -1);
    dp[0] = 0;
    for(int i = 1 ; i <= 15 ; i++){
        for(int j : vector<int>{4 , 6, 9}){
            if(i >= j and dp[i - j] != -1){
                dp[i] = max(dp[i] , dp[i - j] + 1);
            }
        }
    }
    if(n <= 15){
        cout << dp[n];
    }
    else{
        long long t = (n - 16) / 4 + 1;
        cout << t + dp[n - 4 * t];
    }
}