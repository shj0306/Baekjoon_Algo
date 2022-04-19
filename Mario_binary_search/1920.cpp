//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M;
//vector<int> v;
//
//bool bin_search(int s, int e, int val) {
//    while(s <= e) {
//        int mid = (s + e) / 2;
//        if (v[mid] > val) e = mid - 1;
//        else if (v[mid] < val) s = mid + 1;
//        else return true;
//    }
//    return false;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    v = vector<int>(N);
//
//    for (int i = 0; i < N; i++) cin >> v[i];
//    sort(all(v));
//    cin >> M;
//    for (int i = 0; i < M; i++) {
//        int num; cin >> num;
//        cout << bin_search(0, N-1, num) << '\n';
//    }
//}