#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll  a, b, c;
    cin >> a >> b >> c;
    ll res = b / c;
    res = res * c;
    if (res >= a && res <= b) {
        cout << res;
    }
    else {
        cout << "-1";
    }


    return 0;
}