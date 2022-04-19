//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 1e5+1;
//int N, M, comp[MAX], sv[MAX];
//int main() {
//    fast_io;
//    cin >> N >> M;
//    for (int i = 1; i <= N; i++) cin >> sv[i];
//    for (int i = 0; i < M; i++) {
//        int emp, w;
//        cin >> emp >> w;
//        comp[emp] += w;
//    }
//    for (int i = 2; i <= N; i++) comp[i] += comp[sv[i]];
//    for (int i = 1; i <= N; i++) cout << comp[i] << ' ';
//}