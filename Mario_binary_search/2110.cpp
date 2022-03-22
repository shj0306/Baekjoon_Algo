//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MAX = 200000;
//int N, C;
//vector<int> home;
////1. dist만큼의 두 공유기를 설치 가능한지
////2. 나머지 공유기를 dist이상으로 설치가 가능한 지
////1 2 (4) (8) 12
//
//bool possible(int dist) {
//    int start = home[0];
//    int cnt = 1, d;
//    for (int i = 1; i < N; i++) {
//        d = home[i] - start;
//        if (dist <= d) {
//            cnt++;
//            start = home[i];
//        }
//    }
//    return cnt >= C;
//}
//int main() {
//    fast_io;
//    cin >> N >> C; //집, 공유기
//    home = vector<int> (N);
//    for (int i = 0; i < N; i++) cin >> home[i];
//    sort(all(home)); //집들의 좌표 오름차순 정렬
//
//    int left = 1, right = home[home.size()-1] - home[0];
//    int ans = left;
//    while(left <= right) {
//        int mid = (left + right) / 2; //가장 인접한 두 공유기 사이 거리
//        //가장 인접한 두 공유기 사이 거리가 mid일 때, C개 설치가 가능한가?
//        if (possible(mid)) {
//            ans = max(ans, mid);
//            left = mid + 1;
//        }else right = mid - 1;
//    }
//    cout << ans;
//}