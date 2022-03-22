//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 1e5+1;
//int n, c;
//ll res, jewel[500001];
//vector<pii> Y[MAX], X[MAX];
//
//int main() {
//    fast_io;
//    cin >> n >> c;
//
//    int max_x = 0, max_y = 0;
//    for (int i = 1; i <= n; i++) {
//        int x, y; cin >> x >> y >> jewel[i];
//        Y[y].emplace_back(x,i);
//        X[x].emplace_back(y,i);
//    }
//
//    int cnt = 0, cur_y = 0, cur_x = MAX-1;
//    ll sum = 0;
//
//    while(cur_y <= MAX && cur_x >= 0) {
//        res = max(res, sum * (cnt <= c) * 1LL);
//        if (cnt <= c) { //y좌표를 1 증가시킨다
//            for (auto [x, v] : Y[cur_y++]) {
//                if (x <= cur_x) {
//                    cnt++;
//                    sum += jewel[v];
//                }
//            }
//        }else { //x좌표를 1감소시킨다.
//            for (auto [y, v] : X[cur_x--]) {
//                if (y <= cur_y) {
//                    cnt--;
//                    sum -= jewel[v];
//                }
//            }
//        }
//        res = max(res, sum * (cnt <= c) * 1LL);
//    }
//    res = max(res, sum * (cnt <= c) * 1LL);
//    cout << res;
//}
//// Two-Pointer, PQ, Segment-Tree, Prefix_sum
//// 15/16
////https://seastar105.tistory.com/96 참고
///*
// * 접근법
// * y좌표가 a일 때, 최대로 얻을 수 있는 가치의 합은 x좌표를 최대한 크게 그리는 것이다. 그 때 x좌표를 b라고 하자.
// * 이제 y좌표를 a<c인 c로 고정해보자. 이 c에서 최대한 크게 그린 직사각형의 x좌표를 d라고 할 때
// * 이 d는 d <= b를 만족한다.
// * 그러한 점들을 평면상에 찍어 그려보면 왼쪽 위로 올라가는 계단 형식으로 그려지게 된다.
// * 제일 처음 y좌표는 0부터, x좌표는 현재 y좌표에서 포함할 수 있는 최대한 크게 그린다.
// * 현재 포함된 점들의 개수가 C보다 작거나 같다면 y를 1 키우고 x좌표까지 점들을 모두 추가한다.
// */
