#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 1;i <= n ; i++){
        cin >> a[i];
    }
    int res = 1;
    unordered_map<int , int>index;
    for(int i = 1 , j = 1 ; i <=n ; i++){
        j = max(j , index[a[i]]);
        res = max(res , i - j + 1);
        index[a[i]] = i + 1;
    }
    cout << res;
}