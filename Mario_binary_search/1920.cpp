//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int N, M;
//vector<int> vec;
//
//bool bin_search(int s, int e, int val) {
//    if (s > e) return false;
//    int mid = (s+e) / 2;
//    if (vec[mid] == val) return true;
//    else if (vec[mid] > val) return bin_search(s, mid-1, val);
//    else return bin_search(mid+1, e, val);
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    vec = vector<int>(N+1);
//    for (int i = 1; i <= N; i++) cin >> vec[i];
//    sort(begin(vec)+1, end(vec));
//    cin >> M;
//    for (int i = 0; i < M; i++) {
//        int num;
//        cin >> num;
//        if (bin_search(1, N, num)) cout << 1 << '\n';
//        else cout << 0 << '\n';
//    }
//}