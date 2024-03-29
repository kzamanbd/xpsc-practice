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
        string str1, str2;
        cin >> str1 >> str2;

        for (int i = 0; i < n; i++) {
            if (str1[i] == 'B') {
                str1[i] = 'G';
            }
            if (str2[i] == 'B') {
                str2[i] = 'G';
            }
        }
        if (str1 == str2) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }
    return 0;
}