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
        string buildStr, str;
        for (int i = 0;i < n; i++) {
            char c;
            cin >> c;
            str += tolower(c);
        }
        buildStr.push_back(str[0]);
        for (int i = 1; i < n; i++) {
            if (buildStr.back() != str[i]) {
                buildStr.push_back(str[i]);
            }
        }
        if (buildStr == "meow") {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}