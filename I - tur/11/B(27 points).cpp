#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long a[n + 1] , pre[n + 1] = {0};
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
        pre[i] = pre[i - 1] + a[i];
    }
    for(int i = 1 ; i <= n ; i++){
        for(int j = i ; j <= n ; j++){
            if((pre[j] - pre[i - 1]) % n == 0){
                cout << i << " " << j;
                // cout << pre[j] << " " << pre[i - 1];
                return 0;
            }
        }
    }
}