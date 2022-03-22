//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <queue>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const int inf = 100000007;
//
//typedef struct idx
//{
//    int x, y, cnt;
//} idx;
//
//typedef struct node
//{
//    int y, cnt;
//} node;
//
////연산자 오버로딩 필수
//bool operator < (const node& a, const node& b)
//{
//    return a.y < b.y;
//}
//
//bool operator < (const node& a, int n)
//{
//    return a.y < n;
//}
//
//int main() {
//    fast_io;
//    int N,T,mx = 0;
//    cin >> N >> T;
//
//    vector<pii> v(N);
//
//    for (int i = 0; i < N; ++i)
//    {
//        cin >> v[i].first >> v[i].second;
//        mx = max(mx, v[i].first);
//    }
//
//    vector<vector<node>> vc(mx+1);
//
//    for (int i = 0; i < N; i++) vc[v[i].first].push_back({v[i].second, inf});
//    for (int i = 0; i <= mx; i++) sort(vc[i].begin(), vc[i].end());
//
//    int lo, hi;
//    queue<idx> q;
//    vector<node>::iterator it, it2;
//
//    q.push({0,0,0});
//
//    while(!q.empty()) {
//        auto [x, y, cnt] = q.front();
//        q.pop();
//
//        for (int i = max(0, x-2); i <= x + 2; i++) {
//            if (i > mx) continue;
//
//            it = lower_bound(vc[i].begin(), vc[i].end(), y - 2);
//            it2 = lower_bound(vc[i].begin(), vc[i].end(), y + 2);
//
//            if (it != vc[i].end()) {
//                lo = it - begin(vc[i]);
//                hi = min((int)vc[i].size()-1, it2 - begin(vc[i]));
//
//                for (int j = lo; j <= hi; j++) {
//                    if (cnt + 1 < vc[i][j].cnt && abs(y - vc[i][j].y) <= 2) {
//                        vc[i][j].cnt = cnt + 1;
//                        q.push({i, vc[i][j].y, vc[i][j].cnt});
//                    }
//                }
//            }
//        }
//    }
//
//    int res = inf;
//    for (int i = 0; i <= mx; i++) {
//        if (!vc[i].empty()) {
//            auto [y, cnt] = vc[i][vc[i].size()-1];
//            if (y == T) res = min(res, cnt);
//        }
//    }
//
//    res == inf ? cout << -1 : cout << res;
//}