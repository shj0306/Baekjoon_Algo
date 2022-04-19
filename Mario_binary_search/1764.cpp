//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M;
//string name;
//vector<string> no_lis, res;
//
//int bin_search(int s, int e, const string& val) {
//    while(s <= e) {
//        int mid = (s+e) / 2;
//        if (no_lis[mid] > val) e = mid - 1;
//        else if (no_lis[mid] < val) s = mid + 1;
//        else return 1;
//    }
//    return 0;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    no_lis.resize(N);
//
//    for (int i = 0; i < N; i++) cin >> no_lis[i];
//    sort(all(no_lis));
//
//    for (int i = 0; i < M; i++) {
//        cin >> name;
//        if (bin_search(0, N-1, name)) {
//            res.push_back(name);
//        }
//    }
//
//    sort(all(res));
//    cout << res.size() << '\n';
//    for (const auto& val : res) cout << val << '\n';
//}