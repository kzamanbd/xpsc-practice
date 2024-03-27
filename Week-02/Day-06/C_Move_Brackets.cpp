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
        string str;
        cin >> str;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (str[i] == ')' && count) {
                count--;
            }
            if (str[i] == '(') {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}