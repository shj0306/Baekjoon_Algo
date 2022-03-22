//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second
//using namespace std;
//
//int main() {
//    fast_io;
//    int N; cin >> N;
//
//    for (int i = 0; i < N; i++) {
//        string ps; cin >> ps;
//        bool is_skip = false;
//        int open = 0; //열린 괄호 개수
//        for (auto c : ps) {
//            if (c == '(') open++;
//            else if (c == ')') {
//                if (open) open--;
//                else {
//                    is_skip = true;
//                    cout << "NO" << '\n';
//                    break;
//                }
//            }
//        }
//        if (!is_skip) open ? cout << "NO" << '\n' : cout << "YES" << '\n';
//    }
//}