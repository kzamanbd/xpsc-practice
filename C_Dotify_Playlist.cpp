#include <bits/stdc++.h>
#define ll long long
#define PQ priority_queue
#define pi pair<int,int>
#define all(x) x.begin(),x.end()
#define range(i,n) for(int i=0;i<n;i++)
#define in_range(i,x,n) for(int i=x;i<n;i++)
#define fasterIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int maxLength(vector<pair<int, int>>& songs, int l, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    int totalLength = 0;

    for (auto [M, L] : songs) {
        if (L == l) {
            pq.push(M);
            totalLength += M;
            if (pq.size() > k) {
                totalLength -= pq.top();
                pq.pop();
            }
        }
    }
    return pq.size() == k ? totalLength : -1;
}

int main() {

    fasterIO;

    int tc;
    cin >> tc;
    while (tc--) {
        int n, k, l;
        cin >> n >> k >> l;
        vector<pair<int, int>> songs;
        for (int i = 0; i < n; i++) {
            int M, L;
            cin >> M >> L;
            songs.push_back(make_pair(M, L));
        }
        cout << maxLength(songs, l, k) << endl;

    }
    return 0;
}