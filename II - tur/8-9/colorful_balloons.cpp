#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool bit = s[0] == '1';
    int res = 0;
    for(int i = 1; i < s.size(); i++){
        if(bit and s[i] == '1')   res++, bit = false;
        else if(!bit and s[i] == '0')    res++, bit = true;
        else bit = !bit;
    }
    // cout << res;
    reverse(s.begin(), s.end());
    int tmp = 0;
    bit = s[0] == '1';
    for(int i = 1; i < s.size(); i++){
        if(bit and s[i] == '1')   tmp++, bit = false;
        else if(!bit and s[i] == '0')    tmp++, bit = true;
        else bit = !bit;
    }
    cout << min(res, tmp);
}