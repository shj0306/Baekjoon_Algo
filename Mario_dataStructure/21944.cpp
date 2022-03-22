//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//
//const int INF = 1e9;
//const int MAX = 100001;
//
//struct cmp2 {
//    bool operator()(pii a, pii b) const {
//        if (a.first == b.first) return a.second < b.second;
//        return a.first < b.first;
//    }
//};
//
//int level[MAX];
//int algorithm[MAX];
//
///*
// * Ʋ�ȴ� ���� : set�� lower_bound, upper_bound�� �Ǵ� �� ������.
// */
//
//int main() {
//    fast_io;
//    int N, M, p, l, algo, x;
//    cin >> N;
//
//    set<pii, cmp2> prob1[101]; //algorithm�� {level, problem}
//    set<pii> prob2, prob3; //{level, problem}
//
//    for (int i = 0; i < N; i++) {
//        cin >> p >> l >> algo;
//        prob1[algo].insert({l, p});
//        prob2.insert({l, p}); //{���̵�, ����}
//        prob3.insert({l, p}); //{���̵�, ����}
//        level[p] = l; algorithm[p] = algo;
//    }
//    cin >> M;
//
//    for (int i = 0; i < M; i++) {
//        string cmd;
//        cin >> cmd;
//        if (cmd == "recommend") { //�˰��� �� ����
//            cin >> algo >> x;
//            if (x == 1) {
//                auto it = --prob1[algo].end();
//                cout << it->second << '\n';
//            } else {
//                auto it = prob1[algo].begin();
//                cout << it->second << '\n';
//            }
//        } else if (cmd == "recommend2") {//��ü ���� �� ����
//            cin >> x;
//            if (x == 1) {
//                auto it = --prob2.end();
//                cout << it->second << '\n';
//            } else {
//                auto it = prob2.begin();
//                cout << it->second << '\n';
//            }
//        } else if (cmd == "recommend3") {//���̵� l�̻��� ���� �� ���� ���� Ȥ�� ����� ���� ���
//            cin >> x >> l;
//            if (x == 1) {
//                auto it = prob3.upper_bound({l-1, INF});
//                if (it == prob3.end()) cout << -1 << '\n';
//                else cout << it->second << '\n';
//            } else {
//                auto it = prob3.upper_bound({l, -INF});
//                if (it == prob3.begin()) cout << -1 << '\n';
//                else cout << prev(it)->second << '\n';
//            }
//        } else if (cmd == "add") {
//            cin >> p >> l >> algo;
//            prob1[algo].insert({l, p});
//            prob2.insert({l, p});
//            prob3.insert({l, p});
//            level[p] = l, algorithm[p] = algo;
//        } else if (cmd == "solved") {
//            cin >> p;
//            prob1[algorithm[p]].erase({level[p], p});
//            prob2.erase({level[p], p});
//            prob3.erase({level[p], p});
//        }
//    }
//}