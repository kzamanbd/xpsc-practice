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
        int a, b, s;
        cin >> a >> b >> s;
        if (a + b == s) {
            cout << "+";
        }
        else {
            cout << "-";
        }
        cout << endl;

    }
    return 0;
}