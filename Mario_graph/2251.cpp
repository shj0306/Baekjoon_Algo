//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//struct Info {
//    int a, b, c;
//};
//int A, B, C;
//bool check[201][201][201];
//set<int> res;
//queue<Info> q;
//
//void print() {
//    for (auto it = res.begin(); it != res.end(); it++) {
//        cout << *it << ' ';
//    }
//}
//
//void bfs() {
//    q.push({0,0,C});
//    check[0][0][C] = true;
//    while(!q.empty()) {
//        auto [a, b, c] = q.front();
//        if (a == 0) res.insert(c);
//        q.pop();
//        if (a != 0) {
//            int bal_b = B - b;
//            int bal_c = C - c;
//            if (a <= bal_b) {
//                if (!check[0][b+a][c]) {
//                    check[0][b+a][c] = true;
//                    q.push({0,b+a,c});
//                }
//            }else {
//                if (!check[a - bal_b][B][c]) {
//                    check[a - bal_b][B][c] = true;
//                    q.push({a-bal_b, B, c});
//                }
//            }
//
//            if (a <= bal_c) {
//                if (!check[0][b][c+a]) {
//                    check[0][b][c+a] = true;
//                    q.push({0,b,c+a});
//                }
//            }else {
//                if (!check[a - bal_c][B][C]) {
//                    check[a - bal_c][B][C] = true;
//                    q.push({a-bal_c, B, C});
//                }
//            }
//        }
//        if (b != 0) {
//            int bal_a = A - a;
//            int bal_c = C - c;
//            if (b <= bal_a) {
//                if (!check[a+b][0][c]) {
//                    check[a+b][0][c] = true;
//                    q.push({a+b,0,c});
//                }
//            }else {
//                if (!check[A][b - bal_a][c]) {
//                    check[A][b-bal_a][c] = true;
//                    q.push({A, b-bal_a, c});
//                }
//            }
//
//            if (b <= bal_c) {
//                if (!check[a][0][c+b]) {
//                    check[a][0][c+b] = true;
//                    q.push({a,0,c+b});
//                }
//            }else {
//                if (!check[a][b-bal_c][C]) {
//                    check[a][b-bal_c][C] = true;
//                    q.push({a, b-bal_c, C});
//                }
//            }
//        }
//        if (c != 0) {
//            int bal_a = A - a;
//            int bal_b = B - b;
//            if (c <= bal_a) {
//                if (!check[a+c][b][0]) {
//                    check[a+c][b][0] = true;
//                    q.push({a+c,b,0});
//                }
//            }else {
//                if (!check[A][b][c-bal_a]) {
//                    check[A][b][c-bal_a] = true;
//                    q.push({A, b, c-bal_a});
//                }
//            }
//
//            if (c <= bal_b) {
//                if (!check[a][b+c][0]) {
//                    check[a][b+c][0] = true;
//                    q.push({a,b+c,0});
//                }
//            }else {
//                if (!check[a][B][c-bal_b]) {
//                    check[a][B][c-bal_b] = true;
//                    q.push({a, B, c-bal_b});
//                }
//            }
//        }
//    }
//    print();
//}
//
//int main() {
//    fast_io;
//    cin >> A >> B >> C;
//    bfs();
//}