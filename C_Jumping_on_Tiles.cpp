#include <bits/stdc++.h>
#define ll long long
#define PQ priority_queue
#define pi pair<int,int>
#define all(x) x.begin(),x.end()
#define range(i,n) for(int i=0;i<n;i++)
#define in_range(i,x,n) for(int i=x;i<n;i++)
#define fasterIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main() {

    fasterIO;

    int tc;
    cin >> tc;
    while (tc--) {
        string str;
        cin >> str;
        int n = str.size();

        vector<pair<char, int>> orders;

        for (int i = 0; i < n; i++) {
            char c = str[i];
            if (c >= str[0] && c <= str[n - 1]) {
                orders.push_back({ c, i });
            }
        }


        // sort(str.begin(), str.end(), );
        cout << str << endl;
    }
    return 0;
}