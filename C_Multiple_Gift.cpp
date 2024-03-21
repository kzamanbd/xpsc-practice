#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x, y;
    cin >> x >> y;
    x = x * 2;
    int res = 1;
    while (x <= y) {
        res++;
        x = x * 2;
    }
    cout << res;
    return 0;
}