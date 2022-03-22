//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    priority_queue<int, vector<int>, greater<>> pq;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            int val; cin >> val;
//            if (pq.size() < N) pq.push(val);
//            else if (pq.top() < val) {
//                pq.pop();
//                pq.push(val);
//            }
//        }
//    }
//    cout << pq.top();
//}