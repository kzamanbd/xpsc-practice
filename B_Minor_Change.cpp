#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;
    int count = 0;

    for (int i = 0;i < s.length();i++) {
        if (s[i] != t[i]) {
            count++;
        }
    }
    cout << count << '\n';
    return 0;
}