//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, K, Q, M, res;
//
//int P_sum[5003];
//int main() {
//    fast_io;
//    cin >> N >> K >> Q >> M;
//    set<int> sleepy;
//
//    for (int i = 0; i < K; i++) {
//        int student; cin >> student;
//        sleepy.insert(student);
//    }
//    for (int i = 3; i < N + 3; i++) P_sum[i] = 1;
//    for (int i = 0; i < Q; i++) {
//        int num; cin >> num;
//        for (int st = num; st < N+3; st+=num) {
//            if (sleepy.find(st) != sleepy.end()) continue;
//            P_sum[st] = 0;
//        }
//    }
//    for (int i = 4; i < N + 3; i++) P_sum[i] += P_sum[i-1];
//    for (int i = 0; i < M; i++) {
//        int s, e;
//        cin >> s >> e;
//        cout << P_sum[e] - P_sum[s-1] << '\n';
//    }
//}
///*
// * https://ongveloper.tistory.com/308
// */