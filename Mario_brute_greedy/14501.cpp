//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int N, res;
//vector<pii> consult;
//
//void solve(int day, int pay) {
//    if (day == N+1) { //퇴사하는 날
//        res = max(res, pay);
//        return;
//    }
//    if (day > N+1) return;
//    solve(day+1, pay); //해당 날 상담 선택 안함
//    solve(day+consult[day].first, pay + consult[day].second);//선택 함
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    consult = vector<pii>(N+1);
//    for (int i = 1; i <= N; i++) cin >> consult[i].first >> consult[i].second;
//
//    solve(1, 0);
//    cout << res;
//}
//
///*
// * data : 퇴사날, 각 상담의 시간과 금액
// * 조건 : 상담을 하게 되면 해당 기간 동안 다른 상담은 할 수 없다.
// * 결과 : 최대 수익
// */