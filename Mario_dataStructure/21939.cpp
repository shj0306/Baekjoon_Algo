//#include <bits/stdc++.h>
//#include <unordered_map>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//const int MAX = 100001;
//
//struct cmp1 {
//    bool operator()(pii p1, pii p2) {
//        if (p1.first == p2.first) return p1.second < p2.second;
//        return p1.first < p2.first;
//    }
//};
//
//struct cmp2{
//    bool operator() (pii p1, pii p2) {
//        if (p1.first == p2.first) return p1.second > p2.second;
//        return p1.first > p2.first;
//    }
//};
//
//int main() {
//    fast_io;
//    int N,M,p,l; cin >> N;
//    priority_queue<pii, vector<pii>, cmp1> pqd; //difficult
//    priority_queue<pii, vector<pii>, cmp2> pqe; //easy
//    unordered_map<int, int> um;
//    for (int i = 0; i < N; i++) {
//        cin >> p >> l;
//        pqd.push({l,p});
//        pqe.push({l,p});
//        um[p] = l; //문제 난이도 저장
//    }
//
//    cin >> M;
//    for (int i = 0; i < M; i++) {
//        string cmd;
//        cin >> cmd;
//        if (cmd == "add") {
//            cin >> p >> l;
//            pqd.push({l,p});
//            pqe.push({l,p});
//            um[p] = l;
//        }else if (cmd == "recommend") {
//            int x; cin >> x;
//            if (x == 1) { //difficult
//                while(!pqd.empty()) {
//                    if (um[pqd.top().second] == pqd.top().first) {
//                        cout << pqd.top().second << '\n';
//                        break;
//                    }else pqd.pop();
//                }
//            }else { //easy
//                while(!pqe.empty()) {
//                    if (um[pqe.top().second] == pqe.top().first) {
//                        cout << pqe.top().second << '\n';
//                        break;
//                    }else pqe.pop();
//                }
//            }
//        }else if (cmd == "solved") {
//            cin >> p;
//            um[p] = 0;
//        }else return -1;
//    }
//}