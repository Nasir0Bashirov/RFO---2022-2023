#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int n, cur;

void solve(){
    bool flag = false;
    for(int i = 1; i <= 9 and !flag; i++){ // 100 - 999
        for(int j = 0; j <= 9; j++){
            if(i * 100 + j * 10 + i >= 991)    flag = true;
            if(flag)    break;
            v.push_back(i * 100 + j * 10 + i);
            // if(v.size() == n)   return;
        }
        if(i == 9)  break;
        v.push_back(i * 100 + 90 + i + 1);
        // if(v.size() == n)   return;
    }
    v.push_back(991);
    flag = false;
    // if(v.size() == n)   return;
    for(int i = 1; i <= 9 and !flag; i++){ // 1000 9999
        for(int j = 0; j <= 9 and !flag; j++){
            for(int k = 0; k <= 9; k++){
                if(i * 1000 + j * 100 + k * 10 + i >= 9991)     flag = true;
                if(flag)    break;
                v.push_back(i * 1000 + j * 100 + k * 10 + i);
                // if(v.size() == n)   return;
            }
        }
        if(i == 9)  break;
        v.push_back(i * 1000 + 990 + i + 1);
        // if(v.size() == n)   return;
    }
    v.push_back(9991);
    flag = false;
    // if(v.size() == n)   return; // 10000 99999
    for(int i = 1; i <= 9 and !flag; i++){
        for(int j = 0; j <= 9 and !flag; j++){
            for(int k = 0; k <= 9 and !flag; k++){
                for(int z = 0; z <= 9; z++){
                    if(i * 10000 + j * 1000 + k * 100 + z * 10 + i >= 99991)    flag = true;
                    if(flag)    break;
                    v.push_back(i * 10000 + j * 1000 + k * 100 + z * 10 + i);
                    // if(v.size() == n)   return;
                }
            }
        }
        if(i == 9)  break;
        v.push_back(i * 10000 + 9990 + i + 1);
        // if(v.size() == n)   return;
    }
    v.push_back(99991);
    flag = false;
    // if(v.size() == n)   return;
    for(int i = 1; i <= 9; i++){ // 100000 999999
        for(int j = 0; j <= 9; j++){
            for(int k = 0; k <= 9; k++){
                for(int z = 0; z <= 9; z++){
                    for(int x = 0; x <= 9; x++){
                        v.push_back(i * 100000 + j * 10000 + k * 1000 + z * 100 + x * 10 + i);
                        // if(v.size() == n)   return;
                    }
                }
            }
        }
        if(i == 9)  break;
        v.push_back(i * 100000 + 99990 + i + 1);
        // if(v.size() == n)   return;
    }
}

int main(){
    cin >> n;
    solve();
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}