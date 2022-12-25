#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    int res = 1 , start = -1 , lst;
    cin >> s;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == 'A' or s[i] == 'I' or s[i] == 'O' or s[i] == 'E' or s[i] == 'U' or s[i] == 'Y'){
            res = max(res , i - start);
            start = i;
        }
    }
    // cout << start << " " << s[start] << " ";
    res = max((int)s.size() - start , res);
    cout << res;
} 