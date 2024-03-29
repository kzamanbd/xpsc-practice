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
        map<int, int>freq;
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
        int mx_freq = 0;
        for (auto i : freq) {
            mx_freq = max(mx_freq, i.second);
        }
        int ans = 0;
        while (mx_freq < n) {
            int rem = n - mx_freq;
            int can_add = mx_freq;
            ans++;
            ans += min(can_add, rem);
            mx_freq += min(can_add, rem);
        }
        cout << ans << endl;

    }
    return 0;
}