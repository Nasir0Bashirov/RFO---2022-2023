#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n;
    map<int, int> mp;
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(mp[x])   mp.erase(x);
        else    mp[x] = 1;
    }
    cout << mp.size();
}