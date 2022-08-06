//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//ll N, K;
//ll D[2][50][101]; //음수때문에 +50을 해줌.
//
///*
////https://coloredrabbit.tistory.com/129 참고
// * rec(v,p,r)
// * v : ')'의 수가 '('의 수를 역전했던 적이 있는 지 확인하는 플래그 변수
// * p : 문자열 현재 위치
// * r : '('의 수 - ')'의 수
// */
//
//ll rec(int v, int p, int r) {
//    if (p == N) return v || r != 50; //0이라고 생각하면 된다.
//    ll& ret = D[v][p][r];
//    if (ret != -1) return ret;
//    ll OP = rec(v, p+1, r+1); //(XXXX의 괄호 ㄴㄴ 문자열 개수
//    ll CL = rec(v || r - 1 < 50, p+1, r-1); //)XXXX 괄호 ㄴㄴ 문자열 개수
//    ret = OP + CL;
//    return ret;
//}
//
//void f(int v, int p, int r, ll k) {
//    if (p == N) return;
//    ll pivot = rec(v, p+1, r+1); //(XXXX의 괄호 ㄴㄴ 문자열 개수
//    if (pivot <= k) {
//        cout << ')';
//        f(v || r - 1 < 50, p+1, r-1, k - pivot);
//    }else {
//        cout << '(';
//        f(v, p+1, r+1, k);
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> K;
//    memset(D,-1,sizeof(D));
//
//    ll pivot = rec(0,0,50);
//    if (pivot < K) puts("-1");
//    else f(0, 0, 50, K);
//}