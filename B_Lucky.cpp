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
        int lastSum = 0, firstSum = 0;
        int i = 0;
        while (n > 0) {
            int lastDigit = n % 10;
            n /= 10;
            if (i < 3) {
                lastSum += lastDigit;
            }
            else {
                firstSum += lastDigit;
            }
            i++;
        }
        // cout << endl;
        // cout << lastSum << firstSum << endl;
        if (lastSum == firstSum) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}