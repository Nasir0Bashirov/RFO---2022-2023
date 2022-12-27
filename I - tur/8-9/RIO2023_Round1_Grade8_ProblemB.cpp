#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 2){
        cout << 1 << " " << 1 << endl << 1 << endl << 2;
        return 0;
    }
    vector<int>a , b;
    if(n & 1){
        bool flag = true;
        for(int i = 1 ; i <= n ; i += 2){
            if(flag){
                if(i + 1 <= n){
                    a.push_back(i);
                    a.push_back(i + 1);
                }
                else{
                    a.push_back(i);
                }
                flag = false;
            }
            else{
                if(i + 1 <= n){
                    b.push_back(i);
                    b.push_back(i + 1);
                }
                else{
                    b.push_back(i);
                }
                flag = true;
            }
        }
    }
    else{
        for(int i = 1 ; i <= n ; i += 4){
            if(i + 3 <= n){
                a.push_back(i);
                a.push_back(i + 3);
                b.push_back(i + 1);
                b.push_back(i + 2);
            }
            else{
                a.push_back(i);
                b.push_back(i + 1);
            }
        }
    }
    cout << a.size() << " " << b.size() << endl;
    for(int i : a){
        cout << i << " ";
    }
    cout << endl;
    for(int i : b){
        cout << i << " ";
    }
}