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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        bool flag = false;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] + arr[j] > k) {
                    flag = true;
                }
            }
        }
        if (flag) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}