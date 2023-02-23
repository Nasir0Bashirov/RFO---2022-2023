#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    deque<int> dq;
    for(int i = 1; i <= n; i++){
        if(i & 1)   dq.push_back(i);
        else    dq.push_front(i);
    }
    if(n & 1){
        while(!dq.empty()){
            cout << dq.back() << " ";
            dq.pop_back();
        }
    }
    else{
        for(int i : dq){
            cout << i << " ";
        }
    }
}