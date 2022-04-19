//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using ll = long long;
//const int MAX = 101;
//int N,M;
////nCr = n-1Cr + n-1Cr-1 : 파스칼의 삼각형 기법
//
//string dp[MAX][MAX];
//
//string bigNumAdd(string num1, string num2) {
//    long long sum = 0;
//    string result;
//
//    //1의 자리부터 더하기 시작
//    while(!num1.empty() || !num2.empty() || sum) {
//        if (!num1.empty()) {
//            sum += num1.back() - '0';
//            num1.pop_back();
//        }
//        if (!num2.empty()) {
//            sum += num2.back() - '0';
//            num2.pop_back();
//        }
//        //다시 string 형태로 만들어 push_back
//        result.push_back((sum % 10) + '0');
//        sum /= 10;
//    }
//    //1의 자리부터 result에 넣었으므로 뒤집어줘야한다
//    reverse(result.begin(), result.end());
//    return result;
//}
//
//string combination(int n, int r) {
//    if (n == r || r == 0) return "1";
//    string &res = dp[n][r];
//    if (!res.empty()) return res;
//    return res = bigNumAdd(combination(n-1,r-1), combination(n-1,r));
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    cout << combination(N,M) << '\n';
//}
