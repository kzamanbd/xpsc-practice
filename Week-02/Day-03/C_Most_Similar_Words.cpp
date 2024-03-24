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
        int word, length, minCount = INT_MAX;
        cin >> word >> length;
        string str[word];

        for (int w = 0; w < word; w++) {
            cin >> str[w];
        }

        for (int i = 0; i < word - 1; i++) {
            for (int j = i + 1; j < word; j++) {
                int count = 0;
                for (int k = 0; k < length; k++) {

                    int diff = abs(str[i][k] - str[j][k]);
                    // cout << diff << endl;
                    count += diff;
                }
                if (minCount > count) {
                    minCount = count;
                }
            }
        }
        cout << minCount << endl;
    }
    return 0;
}
