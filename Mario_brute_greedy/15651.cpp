//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M;
//vector<int> v;
//
//void NandM3(int cnt) {
//    if (cnt == M) {
//        for (auto val : v) cout << val << ' ';
//        cout << '\n';
//        return;
//    }
//    for (int i = 1; i <= N; i++) {
//        v.push_back(i);
//        NandM3(cnt+1);
//        v.pop_back();
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    NandM3(0);
//}