#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;
    int sum = 0;
    if (a <= b) {
        sum += b;
        b--;
        sum += max(a, b);
        cout << sum << endl;
    }
    else {
        sum += a;
        a--;
        sum += max(a, b);
        cout << sum << endl;
    }
    return 0;
}
