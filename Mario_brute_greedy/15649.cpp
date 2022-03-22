//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//int N, M;
//bool visited[9];
//vector<int> vec;
//
//void dfs(int cnt) {
//    if (cnt == M) {
//        for (auto val: vec) cout << val << ' ';
//        cout << '\n';
//        return;
//    }
//    for (int i = 1; i <= N; i++) {
//        if (!visited[i]) {
//            visited[i] = true;
//            vec.push_back(i);
//            dfs(cnt + 1);
//            visited[i] = false;
//            vec.pop_back();
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    dfs(0);
//}