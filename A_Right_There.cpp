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
        int n, x;
        cin >> n >> x;
        if (n <= x) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}