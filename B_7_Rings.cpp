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
        int n, x;
        cin >> n >> x;
        int result = n * x;
        // count digit
        int count = 0;
        while (result > 0) {
            count++;
            result /= 10;
        }
        if (count == 5) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}