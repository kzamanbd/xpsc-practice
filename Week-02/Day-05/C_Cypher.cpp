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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            string s;
            cin >> s;
            for (char ch : s) {
                if (ch == 'D') {
                    arr[i]++;
                    if (arr[i] == 10) {
                        arr[i] = 0;
                    }
                }
                else {
                    arr[i]--;
                    if (arr[i] == -1) {
                        arr[i] = 9;
                    }
                }
            }
        }
        for (int x : arr) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}