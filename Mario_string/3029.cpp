//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second
//using namespace std;
//
//struct TIME {
//    int hour;
//    int minute;
//    int sec;
//};
//
//TIME calc(TIME t1, TIME t2) {
//    int diff_s = t2.sec - t1.sec;
//    if (diff_s < 0) {
//        t2.minute--;
//        diff_s += 60;
//    }
//    int diff_m = t2.minute - t1.minute;
//    if (diff_m < 0) {
//        t2.hour--;
//        diff_m += 60;
//    }
//
//    int diff_h = t2.hour - t1.hour;
//    if (diff_h < 0) diff_h += 24;
//
//    return {diff_h, diff_m, diff_s};
//}
//
//void trans_time(TIME t) {
//    if (t.hour < 10) cout << '0' << t.hour;
//    else cout << t.hour;
//    cout << ':';
//    if (t.minute < 10) cout << '0' << t.minute;
//    else cout << t.minute;
//    cout << ':';
//    if (t.sec < 10) cout << '0' << t.sec;
//    else cout << t.sec;
//}
//
//int main() {
//    fast_io;
//    string cur_time, throw_time;
//    cin >> cur_time >> throw_time;
//
//    istringstream iss(cur_time);
//
//    TIME now{}, target{};
//    string tmp;
//    int idx = 0;
//    while(getline(iss, tmp, ':')) {
//        if (idx == 0) now.hour = stoi(tmp);
//        if (idx == 1) now.minute = stoi(tmp);
//        if (idx == 2) now.sec = stoi(tmp);
//        idx++;
//    }
//
//    istringstream iss2(throw_time);
//    idx = 0;
//    while(getline(iss2, tmp, ':')) {
//        if (idx == 0) target.hour = stoi(tmp);
//        if (idx == 1) target.minute = stoi(tmp);
//        if (idx == 2) target.sec = stoi(tmp);
//        idx++;
//    }
//    if (now.hour == target.hour && now.minute == target.minute && now.sec == target.sec)
//    {
//        cout << "24:00:00";
//        return 0;
//    }
//    TIME diff = calc(now, target);
//    trans_time(diff);
//}