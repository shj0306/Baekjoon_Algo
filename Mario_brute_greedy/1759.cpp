//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int L, C, used[15];
//char alpha[15];
//set<char> tmp;
//
//void solve(int idx, int w_cnt, int c_cnt) {
//    if (idx == C) return;
//    if (w_cnt+c_cnt == L) {
//        if (w_cnt >= 1 && c_cnt >= 2) {
//            for (auto it = tmp.begin(); it != tmp.end(); it++)
//                cout << *it;
//            cout << '\n';
//        }
//        return;
//    }
//    for (int i = idx; i < C; i++) {
//        if (!used[i]) {
//            used[i] = true;
//            tmp.insert(alpha[i]);
//            if (alpha[i] == 'a' || alpha[i] == 'e' || alpha[i] == 'i'
//            || alpha[i] == 'o' || alpha[i] == 'u')
//                solve(i, w_cnt+1, c_cnt);
//            else solve(i, w_cnt, c_cnt+1);
//            tmp.erase(alpha[i]);
//            used[i] = false;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> L >> C;
//    for (int i = 0; i < C; i++) cin >> alpha[i];
//    sort(begin(alpha), begin(alpha)+C);
//    solve(0,0,0);
//}
