#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int S, T;
    cin >> S >> T;
    int count = 0;
    for (int i = 0; i <= S; i++) {
        for (int j = 0; j <= S; j++) {
            for (int k = 0; k <= S; k++) {
                if (i + j + k <= S && i * j * k <= T) {
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}