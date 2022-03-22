//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n;
////https://bconfiden2.tistory.com/277
//int main() {
//    fast_io;
//    cin >> n;
//    vector<int> honey(n + 1);
//    vector<int> prefix(n+1);
//    for (int i = 1; i <= n; i++) {
//        cin >> honey[i];
//        prefix[i] = prefix[i-1] + honey[i];
//    }
//
//    int res = 0;
//    //통이 가장 왼쪽일 때 벌 하나는 가장 오른쪽에 있는 경우가 최대
//    for (int i = n-1; i >= 2; i--)
//        res = max(res, prefix[i-1] * 2 + prefix[n-1] - prefix[i]);
//    //통이 가장 오른쪽일 때 벌 하나는 가장 왼쪽에 있는 경우가 최대
//    for (int i = 2; i <= n-1; i++)
//        res = max(res, (prefix[n] - prefix[i]) * 2 + prefix[i-1]-prefix[1]);
//    //벌들이 양 끝에 있을 때 벌통의 위치로 가능한 경우
//    for (int i = 2; i <= n-1; i++)
//        res = max(res, prefix[i] - prefix[1] + prefix[n-1] - prefix[i-1]);
//
//    cout << res;
//}