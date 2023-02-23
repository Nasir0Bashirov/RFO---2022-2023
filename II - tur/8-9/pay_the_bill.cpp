#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    cout << n + (n % 10 == 0 ? n / 10 : n / 10 + 1);
}