//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int main() {
//    fast_io;
//    int N, M;
//    cin >> N >> M;
//    vector<int> vec(N);
//    for (int i = 0; i < N; i++) cin >> vec[i];
//    int st = 0, en = 0, sum = 0, cnt = 0;
//
//    while(en <= N) {
//        if (sum < M) {
//            if (en == N) break;
//            sum += vec[en++];
//        }
//        else {
//            if (sum == M) cnt++;
//            sum -= vec[st++];
//        }
//    }
//    cout << cnt;
//}