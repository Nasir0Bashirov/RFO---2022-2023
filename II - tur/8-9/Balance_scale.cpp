#include <bits/stdc++.h>
using namespace std;

bitset<100000000> used;
long long sum[70000];

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int mask = 1; mask < (1 << n); mask++){
        for(int j = 0; j < n; j++){
            if(mask & (1 << j))    sum[mask] += a[j];
        }
    }
    for(int mask = 0; mask < (1 << n); mask++){
        int out = ((1 << n) - 1) ^ mask;
        for(int i = out; i > 0; i = (i - 1) & out){
            if(abs(sum[mask] - sum[i]) <= 1e8){
                used[abs(sum[mask] - sum[i])] = 1;
            }
        }
    }
    int i = 1;
    while(true){
        if(!used[i]){
            cout << i;
            return 0;
        }
        i++;
    }
}
