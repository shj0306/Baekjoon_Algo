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
//        if (cnt <= c) { //y��ǥ�� 1 ������Ų��
//            for (auto [x, v] : Y[cur_y++]) {
//                if (x <= cur_x) {
//                    cnt++;
//                    sum += jewel[v];
//                }
//            }
//        }else { //x��ǥ�� 1���ҽ�Ų��.
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
////https://seastar105.tistory.com/96 ����
///*
// * ���ٹ�
// * y��ǥ�� a�� ��, �ִ�� ���� �� �ִ� ��ġ�� ���� x��ǥ�� �ִ��� ũ�� �׸��� ���̴�. �� �� x��ǥ�� b��� ����.
// * ���� y��ǥ�� a<c�� c�� �����غ���. �� c���� �ִ��� ũ�� �׸� ���簢���� x��ǥ�� d��� �� ��
// * �� d�� d <= b�� �����Ѵ�.
// * �׷��� ������ ���� ��� �׷����� ���� ���� �ö󰡴� ��� �������� �׷����� �ȴ�.
// * ���� ó�� y��ǥ�� 0����, x��ǥ�� ���� y��ǥ���� ������ �� �ִ� �ִ��� ũ�� �׸���.
// * ���� ���Ե� ������ ������ C���� �۰ų� ���ٸ� y�� 1 Ű��� x��ǥ���� ������ ��� �߰��Ѵ�.
// */
