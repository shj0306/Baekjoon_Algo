//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int L, K, C;
//vector<int> pos;
//int cutLog(int cutLength);
//
//int main() {
//    fast_io;
//    cin >> L >> K >> C;
//    pos = vector<int>(K);
//    for (int i = 0; i < K; i++) cin >> pos[i];
//    sort(all(pos));
//    int left = 1, right = L; //통나무를 자를 때 가능한 가장 긴 길이의 상한선,하한선
//    int min_max_length = 0, minCutPoint = 0;
//    while(left <= right) {
//        int cutLength = (left + right) / 2; //기준 길이
//        int tmp = cutLog(cutLength); //해당 길이를 기준으로 통나무 자를 때 최소 시작 위치
//        if (tmp) { //가능하면 더 작은 길이도 가능한 지 체크
//            right = cutLength - 1;
//            min_max_length = cutLength;
//            minCutPoint = tmp;
//        }else left = cutLength + 1; //불가능하면 길이를 늘려준다.
//    }
//    cout << min_max_length << ' ' <<  minCutPoint << '\n';
//}
//
//int cutLog(int cutLength) {
//    int cnt = 0, last_cut = L, init_pos = 0;
//    for (int i = K-1; i >= 0; i--) {
//        if (last_cut - pos[i] > cutLength) {
//            if (i == K-1) return 0;
//            last_cut = pos[i+1];
//            if (last_cut - pos[i] > cutLength) return 0;
//            cnt++;
//            init_pos = pos[i+1];
//        }
//        if (cnt >= C) break;
//    }
//    if (cnt < C) init_pos = pos[0];
//    if (init_pos > cutLength) return 0;
//    return init_pos;
//}