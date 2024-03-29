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
        map<int, int> freq;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        int toDeleted = 0;
        for (auto i : freq) {
            toDeleted += i.second - 1;
        }
        int res = n - toDeleted;
        if (toDeleted % 2 == 1) {
            cout << res - 1;
        }
        else {
            cout << res;
        }
        cout << endl;

    }
    return 0;
}