#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    for (int i = 0; i <= c / b; i++) {
        if (((i * b) - c) % a == 0) {
            flag = true;
            break;
        }
    }
    if (flag == true) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}