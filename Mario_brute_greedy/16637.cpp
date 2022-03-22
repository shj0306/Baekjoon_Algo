//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//const int INF = -2147483648;
//
//int N, res = -INF;
//string math_exp;
////단, 괄호 안에는 연산자가 하나만 들어 있어야 한다.
////이거 못봄
//int calc(int num1, int num2, char op) {
//    if (op == '+') return num1 + num2;
//    else if (op == '-') return num1 - num2;
//    else return num1 * num2;
//}
//
//void solve(int idx, int cur) {
//    if (idx >= math_exp.length()) {
//        res = max(res, cur);
//        return;
//    }
//    char oper = (idx == 0) ? '+' : math_exp[idx-1];
//
//    //묶는다.
//    if (idx <= math_exp.length()-3) {
//        int bracket = calc(math_exp[idx]-'0', math_exp[idx+2]-'0', math_exp[idx+1]);
//        solve(idx+4, calc(cur, bracket, oper));
//    }
//    //묶지 않는다.
//    solve(idx+2, calc(cur, math_exp[idx]-'0', oper));
//}
//
//int main() {
//    fast_io;
//    cin >> N >> math_exp;
//    solve(0,0);
//    cout << res;
//}