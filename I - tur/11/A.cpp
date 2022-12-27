#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }
    for(int i = 1 ; i <= n ; i++){
        if(a[i] == 1){
            cout << a[i] << " ";
            for(int j = i + 1 ; j <= n ; j++){
                cout << a[j] << " "; 
            }
            for(int j = 1 ; j < i ; j++){
                cout << a[j] << " ";
            }
        }
    }
}