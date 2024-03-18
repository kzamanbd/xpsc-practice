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
        vector<string> arr[3];
        map<string, int> freq;

        for (int i = 0; i < 3; i++) {
            arr[i].resize(n);
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
                freq[arr[i][j]]++;
            }
        }
        int res[3] = { 0 };
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                if (freq[arr[i][j]] == 1) {
                    res[i] += 3;
                }
                else if (freq[arr[i][j]] == 2) {
                    res[i] += 1;
                }
            }
        }
        cout << res[0] << " " << res[1] << " " << res[2] << endl;
    }
    return 0;
}