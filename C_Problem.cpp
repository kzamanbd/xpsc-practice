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
        int n, m;
        cin >> n >> m;
        int res = n + m;
        if (res % 2 == 0) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}