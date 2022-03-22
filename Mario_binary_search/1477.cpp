//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int N, M, L;
//vector<int> vec;
//
//bool possible(int dist) {
//    int cnt = 0; //필요한 휴게소 개수
//    for (int i = 0; i <= N; i++) {
//        int d = vec[i+1] - vec[i];
//        if (d <= dist) continue;
//        if (d % dist == 0) cnt += (d / dist) - 1;
//        else cnt += (d / dist);
//    }
//    return cnt <= M;
//}
//int main() {
//    fast_io;
//    cin >> N >> M >> L;
//    vec.push_back(0);
//    for (int i = 0; i < N; i++) {
//        int num; cin >> num;
//        vec.push_back(num);
//    }
//    vec.push_back(L);
//    sort(all(vec));
//
//    int left = 1, right = L-(N+M), ans;
//    while(left <= right) {
//        int mid = (left + right) / 2; //휴게소 없는 구간의 최댓값
//        if (possible(mid)) {
//            ans = mid;
//            right = mid - 1;
//        }else left = mid + 1;
//    }
//    cout << ans;
//}