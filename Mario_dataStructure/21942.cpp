//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using pss = pair<string, string>;
//
//struct Info1 {
//    int y, m, d, h, mi;
//};
//
//struct Info2 {
//    int d, mi, h;
//};
//
//int calendar[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//
//Info2 calc_time_diff(Info1 t1, Info1 t2) { //t1 : 반납 시각, t2 : 대여 시각
//
//    Info2 res{};
//    if (t1.mi >= t2.mi) res.mi = t1.mi - t2.mi;
//    else {
//        t1.h--;
//        res.mi = t1.mi + 60 - t2.mi;
//    }
//    if (t1.h >= t2.h) res.h = t1.h - t2.h;
//    else {
//        t1.d--;
//        res.h = t1.h + 24 - t2.h;
//    }
//    if (t1.d >= t2.d) res.d = t1.d - t2.d;
//    else {
//        t1.m--;
//        res.d = t1.d + calendar[t1.m] - t2.d;
//    }
//
//    if (t1.m >= t2.m) {
//        for (int mon = t2.m; mon < t1.m; mon++) res.d += calendar[mon];
//    }
//    return res;
//}
//
//int trans_min(Info2 time) {
//    if (time.d > 0) time.h += time.d * 24;
//    if (time.h > 0) time.mi += time.h * 60;
//    return time.mi;
//}
//
//int main() {
//    fast_io;
//    int N, F; string L;
//    //정보 개수, 대여 기간(ddd/hh:mm), 분당 벌금
//    cin >> N >> L >> F;
//
//    map<pss, Info1> memory; //(user, item) : time
//    map<string, long long> fine_list;
//    Info2 rental_time{};
//
//    string tmp;
//    for (char i: L) {
//        if (i == '/' || i == ':') {
//            if (i == '/') rental_time.d = stoi(tmp);
//            else rental_time.h = stoi(tmp);
//            tmp.clear();
//        } else tmp += i;
//    }
//
//    rental_time.mi = stoi(tmp);
//
//    int trans_rental = trans_min(rental_time); //대여 기간 분으로 환산산
//
//    for (int i = 0; i < N; i++) {
//        string ymd, hs, item, user;
//        cin >> ymd >> hs >> item >> user;
//
//        Info1 time{};
//
//        istringstream iss2(ymd);
//        istringstream iss3(hs);
//
//        int idx = 0;
//        while (getline(iss2, tmp, '-')) {
//            if (idx == 0) time.y = stoi(tmp);
//            else if (idx == 1) time.m = stoi(tmp);
//            else if (idx == 2) time.d = stoi(tmp);
//            idx++;
//        }
//
//        idx = 0;
//        while (getline(iss3, tmp, ':')) {
//            if (idx == 0) time.h = stoi(tmp);
//            else if (idx == 1) time.mi = stoi(tmp);
//            idx++;
//        }
//        if (memory.find({user, item}) == memory.end()) { //빌린 경우
//            memory[{user, item}] = time; //빌린 시각 정보 저장
//        } else {
//            Info1 brw_time = memory[make_pair(user, item)];
//            Info2 time_diff = calc_time_diff(time, brw_time);
//
//            int trans_time_diff = trans_min(time_diff); //대여한 시간 분으로 환산
//            if (trans_time_diff > trans_rental) { //사용자의 대여시간이 정해진 대여 시간을 넘는다면
//                long long fine_fee = (trans_time_diff - trans_rental) * F;
//                fine_list[user] += fine_fee;
//            }
//            memory.erase({user, item}); //반납했기 때문에 기록 제거
//        }
//    }
//
//    if (fine_list.empty()) cout << -1;
//    else {
//        for (auto it = fine_list.begin(); it != fine_list.end(); it++)
//            cout << it->first << ' ' << it->second << '\n';
//    }
//}