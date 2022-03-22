//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int N, ans;
//bool checked[8]; //계란 깨짐 여부
//vector<pii> egg;
//
//void break_eggs(int idx, int cnt) {//현재 손에 들고 있는 계란 위치, 지금까지 깨진 계란 수
//    if ((idx == N-1 && cnt == N-1) || (idx == N)) {
//        ans = max(ans, cnt);
//        return;
//    }
//    int tmp_cnt = cnt;
//    if (checked[idx]) break_eggs(idx+1, cnt);
//    else {
//        int health1 = egg[idx].first; //손에 들고 있는 계란 내구도
//        for (int i = 0; i < N; i++) {
//            int health2 = egg[i].first; //내려 치려고 하는 계란 내구도
//            if (idx == i || checked[i]) //자기 자신 혹은 이미 깨진 계란은 건너띔
//                continue;
//            if (egg[idx].first <= egg[i].second) {
//                tmp_cnt++;
//                checked[idx] = true;
//            }else egg[idx].first -= egg[i].second;
//
//            if (egg[i].first <= egg[idx].second) {
//                tmp_cnt++;
//                checked[i] = true;
//            }else egg[i].first -= egg[idx].second;
//
//            break_eggs(idx+1, tmp_cnt);
//            tmp_cnt = cnt;
//            checked[idx] = checked[i] = false;
//            if (egg[idx].first < health1) egg[idx].first += egg[i].second;
//            if (egg[i].first < health2) egg[i].first += egg[idx].second;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    egg = vector<pii>(N); //{내구도,무게}
//
//    for (int i = 0; i < N; i++) cin >> egg[i].f >> egg[i].s;
//
//    break_eggs(0, 0);
//    cout << ans;
//}