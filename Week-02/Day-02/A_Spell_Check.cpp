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
        string req = "Timru";
        int n;
        string str;
        cin >> n >> str;
        if (req.size() != str.size()) {
            cout << "NO";
        }
        else {
            sort(str.begin(), str.end());
            if (req == str) {
                cout << "YES";
            }
            else {
                cout << "NO";
            }
            // cout << str;
        }
        cout << endl;
    }
    return 0;
}