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
        int n;
        cin >> n;
        int newLine = n;
        n = n * n;
        if (n == 1) {
            cout << "##\n##" << endl;
        }
        else {
            for (int i = 1; i <= n; i++) {
                cout << "##..";
            }
        }
    }
    return 0;
}