//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int N;
//string str1;
//
//bool is_possible(const string& str) {
//    if (str.length() == 1) return true;
//    int sz = (int)str.length();
//
//    for (int i = 1; i <= sz/2; i++) {
//        if (str.substr(sz-i, i) == str.substr(sz-2*i, i)) return false;
//    }
//    return true;
//}
//
//void solve(int idx, const string& cur) { //현재 채워야할 자릿수, 현재까지 채워진 문자열
//    if (idx == N) {
//        cout << cur;
//        exit(0);
//    }
//    for (char i = '1'; i <= '3'; i++) {
//        if (is_possible(cur+i)) {
//            solve(idx+1, cur+i);
//        }
//    }
//}
//int main() {
//    fast_io;
//    cin >> N;
//    solve(0, str1);
//}