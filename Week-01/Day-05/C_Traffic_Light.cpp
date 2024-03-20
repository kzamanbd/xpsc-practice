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
        char ch;
        cin >> ch;
        string str;
        cin >> str;
        str += str;
        int maxi = 0, cnt = 0;
        for (int i = 0;i < str.size();i++) {
            if (str[i] == ch) {
                cnt = 0;
                while (str[i] != 'g' && i < str.size()) {
                    cnt++;
                    i++;
                }
                if (cnt > maxi) {
                    maxi = cnt;
                }
            }
        }
        cout << maxi << "\n";
    }
    return 0;
}