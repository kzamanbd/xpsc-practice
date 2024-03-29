#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, z, k, s;
    cin >> k >> s;
    int count = 0, i, j;
    for (i = 0;i <= k;i++) {
        for (j = 0;j <= k;j++) {
            z = s - i - j;
            if (z >= 0 && z <= k) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}