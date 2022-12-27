#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned ll
#define INF 0x3f3f3f3f
#define all(x) (x).begin(), (x).end()

ll f(string n) {
    ll ans = 0;
    for (int i = n.size() - 1; i >= 0; i--){
        ans *= 10;
        ans += (n[i] - 48);
    }
    return ans;
}

void solve() {
    ll n, m;
    cin >> n >> m;
    if (n == 1) {
        string a = "0123456789";
        ll ans = 0;
        do {
            ll x = f(a);
            string b = to_string(x);
            if (x % 11 == m && b.size() == a.size()) {
                ans++;
            }
        } while (next_permutation(a.begin(), a.end()));
        cout << ans << "\n";
    } else if (n == 2) {
        string a = "00112233445566778899";
        set<string>st;
        ull ans = 0, k = a.size();
        for (int i = 1; i < (1 << k); ++i){
            ll x = 0, y = 0;
            string s = "";
            for (int j = 0; j < k; ++j) {
                if (i & (1 << j)) {
                    x += (int)(a[j] - '0');
                    s += a[j];
                } else {
                    y += (int)(a[j] - '0');
                }       
            }
            ull p = abs(x - y);
            if (p % 11 == m) ans++;
            st.insert(s);
        }
        cout << st.size() << endl;
        cout << ans << '\n';
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}