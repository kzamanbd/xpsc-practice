#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

string amToPmConversion(string time) {
    int hourStr = stoi(time.substr(0, 2));
    string res = time;
    if (hourStr == 0) {
        res = "12" + time.substr(2, 5) + " AM";
    }
    else if (hourStr == 12) {
        res = "12" + time.substr(2, 5) + " PM";
    }
    else {
        if (hourStr > 12) {
            if ((hourStr - 12) > 9) {
                res = to_string(hourStr - 12) + time.substr(2, 5) + " PM";
            }
            else {
                res = "0" + to_string(hourStr - 12) + time.substr(2, 5) + " PM";
            }
        }
        else {
            res = time + " AM";
        }
    }
    return res;
}

string pmToAmConversion(string& time) {
    string hoursStr = time.substr(0, 2);
    int hours = stoi(hoursStr);
    if (time.find("PM") != -1) {
        if (hours == 12) {
            hoursStr = "12";
        }
        else {
            hoursStr = to_string(hours + 12);
        }
    }
    else {
        if (hours == 12) {
            hoursStr = "00";
        }
    }
    return time.replace(0, 2, hoursStr).erase(time.size() - 2);
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        string time;
        getline(cin, time);
        // cout << amToPmConversion(time) << endl;
        cout << pmToAmConversion(time) << endl;

    }
    return 0;
}