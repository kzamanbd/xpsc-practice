#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

std::string convertTo12HourFormat(const std::string& timeStr) {
    std::stringstream ss(timeStr);
    int hour, minute;
    char colon;
    ss >> hour >> colon >> minute;

    cout << hour << colon << minute << endl;

    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << (hour < 12 ? hour : hour - 12) << ":"
        << std::setw(2) << std::setfill('0') << minute << " "
        << (hour < 12 ? "AM" : "PM");
    return oss.str();
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        string time;
        cin >> time;
        // int hourStr = stoi(time.substr(0, 2));
        // if (hourStr == 0) {
        //     cout << "12" << time.substr(2, 5) << " AM" << endl;
        // }
        // else if (hourStr == 12) {
        //     cout << "12" << time.substr(2, 5) << " PM" << endl;
        // }
        // else {
        //     if (hourStr > 12) {
        //         cout << "0" << hourStr - 12 << time.substr(2, 5) << " PM" << endl;
        //     }
        //     else {
        //         cout << time << " AM" << endl;
        //     }
        // }

        cout << convertTo12HourFormat(time) << endl;

    }
    return 0;
}