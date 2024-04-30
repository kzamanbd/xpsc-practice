#include <bits/stdc++.h>
#define ll long long
#define PQ priority_queue
#define pi pair<int,int>
#define all(x) x.begin(),x.end()
#define range(i,n) for(int i=0;i<n;i++)
#define in_range(i,x,n) for(int i=x;i<n;i++)
#define fasterIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int kthBitOffOrOn(int x, int k) {
    return (x >> k) & 1;
}

void printOnBits(int x) {
    for (int k = 0; k < 32; k++) {
        if (kthBitOffOrOn(x, k)) {
            cout << "1 ";
        }
        else {
            cout << "0 ";
        }
    }
}

int turnOnKthBit(int x, int k) {
    return (x | (1 << k));
}

int turnOfKthBits(int x, int k) {
    return x & (~(1 << k));
}

int main() {

    fasterIO;

    // printOnBits(44);
    // cout << kthBitOffOrOn(44, 3) << endl;
    // cout << kthBitOffOrOn(44, 3) << endl;
    // cout << turnOnKthBit(44, 4);
    cout << turnOfKthBits(44, 3);

    return 0;
}