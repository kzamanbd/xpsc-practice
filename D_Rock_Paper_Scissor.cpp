#include <bits/stdc++.h>
#define ll long long
#define PQ priority_queue
#define pi pair<int,int>
#define all(x) x.begin(),x.end()
#define range(i,n) for(int i=0;i<n;i++)
#define in_range(i,x,n) for(int i=x;i<n;i++)
#define fasterIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int minRoundsToWin(int N, string A, string B) {
    int chefWins = 0;
    for (int i = 0; i < N; ++i) {
        if ((A[i] == 'R' && B[i] == 'S') ||
            (A[i] == 'S' && B[i] == 'P') ||
            (A[i] == 'P' && B[i] == 'R')) {
            chefWins++;
        }
    }
    return chefWins;
}

int main() {

    fasterIO;

    int tc;
    cin >> tc;
    while (tc--) {
        int N;
        cin >> N;
        string A, B;
        cin >> A >> B;
        int chefWins = minRoundsToWin(N, A, B);
        int chefinaWins = minRoundsToWin(N, B, A);
        cout << chefWins << " " << chefinaWins << endl;
        // if (chefinaWins == chefWins) {
        //     cout << "0" << endl;
        // }
        // else {
        //     cout << max(chefinaWins, chefWins) << endl;
        // }
    }
    return 0;
}