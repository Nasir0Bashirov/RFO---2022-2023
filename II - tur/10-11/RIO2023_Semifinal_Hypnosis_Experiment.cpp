#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, cnt = 1;
    string a;
    cin >> n >> k >> a;
    a = ' ' + a;
    vector<pair<int, int>> v;
    for(int i = 1; i < n; i++){
        if(a[i] == a[i + 1]){
            cnt++;
        }
        else{
            v.push_back({cnt, a[i] - '0'});
            cnt = 1;
        }
    }
    v.push_back({cnt, a[n] - '0'});
    int l = 0, r = 0, cur = 0, res = 0;
    cnt = 0;
    while(l < v.size() or r < v.size()){
        if(r < v.size() and cnt < k or v[r].second == 1){
            if(v[r].second == 0)    cnt++;
            cur += v[r].first, r++;    
        }
        else{
            res = max(res, cur);
            if(v[l].second == 0)    cnt--;
            cur -= v[l].first, l++;
        }
    }
    cout << res;
}