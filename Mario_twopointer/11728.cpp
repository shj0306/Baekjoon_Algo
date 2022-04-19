//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M, num;
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    vector<int> v1(N), v2(M);
//    vector<int> res;
//
//    for (int i = 0; i < N; i++) cin >> v1[i];
//    for (int i = 0; i < M; i++) cin >> v2[i];
//
//    int l1 = 0, l2 = 0;
//    while(l1 < N && l2 < M) {
//        if (v1[l1] <= v2[l2]) res.push_back(v1[l1++]);
//        else res.push_back(v2[l2++]);
//    }
//
//    if (l1 < N) {
//        for (int i = l1; i < N; i++)
//            res.push_back(v1[i]);
//    }
//    if (l2 < M) {
//        for (int i = l2; i < M; i++)
//            res.push_back(v2[i]);
//    }
//
//    for (auto val : res) {
//        cout << val << ' ';
//    }
//}