#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (b % 3 + c >= 3 || b % 3 == 0) {
            cout << a + (b + c) / 3;
        }
        else {
            cout << "-1";
        }
        cout << endl;

    }
    return 0;
}