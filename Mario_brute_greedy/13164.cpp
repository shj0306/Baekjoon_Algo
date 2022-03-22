//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n, k;
//
////https://burningjeong.tistory.com/436
////1.인접한 키의 차이를 저장한다.
////2.내림차순 정렬
////3.가장 큰 k-1개를 제외하고 나머지부터 끝까지 더한다.
//
//int main() {
//    fast_io;
//    cin >> n >> k;
//    vector<int> stud(n), diff(n-1);
//
//    for (int i = 0; i < n; i++) {
//        cin >> stud[i];
//        if (i) diff[i-1] = stud[i] - stud[i-1];
//    }
//
//    sort(all(diff), greater<>());
//    int res = 0;
//    for (int i = k-1; i < diff.size(); i++) res += diff[i];
//    cout << res;
//}