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
        int n;
        cin >> n;
        int arr1[n], arr2[n];

        for (int i = 0;i < n; i++) {
            cin >> arr1[i];
        }

        for (int i = 0;i < n; i++) {
            cin >> arr2[i];
        }

        int countOm = 0, countAddy = 0;
        int max_om = INT_MIN;
        int max_addy = INT_MIN;
        for (int i = 0; i < n; i++) {

            if (arr1[i] == 0) {
                countOm = 0;
            }
            else {
                countOm++;
            }

            if (arr2[i] == 0) {
                countAddy = 0;
            }
            else {
                countAddy++;
            }
            max_om = max(max_om, countOm);
            max_addy = max(max_addy, countAddy);
        }

        if (max_addy > max_om) {
            cout << "Addy";
        }
        else if (max_om > max_addy) {
            cout << "Om";
        }
        else {
            cout << "Draw";
        }
        cout << "\n";

    }
    return 0;
}