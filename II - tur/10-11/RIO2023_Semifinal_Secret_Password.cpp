#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    bool flag = true;
    while(!s1.empty() or !s2.empty()){
        if(flag){
            cout << s1[0];
            s1.erase(0, 1);
        }
        else{
            cout << s2[0];
            s2.erase(0, 1);
        }
        flag = !flag;
    }
}