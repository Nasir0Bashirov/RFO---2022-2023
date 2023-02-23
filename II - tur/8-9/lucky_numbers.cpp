#include <bits/stdc++.h>
using namespace std;

int log4(long long n){
    int res = 0;
    while(n >= 4){
        n /= 4;
        res++;
    }
    return res;
}

long long find_kth(long long n){
    int lg = log4(n);
    map<long long, int> mp;
    long long pw = powl(4, lg);
    for(int i = lg; i >= 0; i--){
        while(n >= pw){
            n -= pw;
            mp[i]++;
        }
        pw /= 4;
    }
    for(int i = 1; i <= lg; i++){
        if(mp[i - 1] <= 0){
            mp[i - 1] += 4;
            mp[i]--;
        }
    }

    map<int, int> hsh;
    hsh[1] = 1, hsh[2] = 2, hsh[3] = 4, hsh[4] = 8;
    string ans = "";
    for(int i = lg; i >= 0; i--){
        if(mp[i] <= 0)  continue;
        ans += hsh[mp[i]] + '0';
    }
    return stoll(ans);
}

long long first_bigger(long long n){
    long long l = 1, r = 1e10, best = 1e10;
    while (l <= r){
        long long mid = (l + r) >> 1;
        if(find_kth(mid) > n){
            r = mid - 1, best = mid;
        }
        else{
            l = mid + 1;
        }
    }
    return find_kth(best);
}

int main(){
    int t;
    long long q, n;
    cin >> t;
    while(t--){
        cin >> q >> n;
        if(q == 1){
            cout << find_kth(n) << endl;
        }
        else{
            cout << first_bigger(n) << endl;
        }
    }
}