//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n;
//
//int main() {
//    fast_io;
//    cin >> n;
//    priority_queue<int, vector<int>, greater<>> pq;
//
//    for (int i = 0; i < n; i++) {
//        int num; cin >> num;
//        pq.push(num);
//    }
//
//    int res = 0;
//    while(pq.size() > 1) {
//        int v1 = pq.top();
//        pq.pop();
//        if (pq.empty()) {
//            res += v1;
//            break;
//        }
//        int v2 = pq.top();
//        pq.pop();
//
//        res += v1 + v2;
//        pq.push(v1+v2);
//    }
//    cout << res;
//}