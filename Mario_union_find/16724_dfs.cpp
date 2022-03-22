//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int n, m, res;
//int visited[1001][1001];
//char zone[1001][1001];
//
//void dfs(int i, int j, int number) {
//
//    if (visited[i][j] == number) { //같은 영역일 때 카운트 후 종료
//        res++;
//        return;
//    }
//    if (visited[i][j] != 0) return;
//    visited[i][j] = number;
//    if (zone[i][j] == 'U') dfs(i-1,j,number);
//    else if (zone[i][j] == 'D') dfs(i+1,j,number);
//    else if (zone[i][j] == 'L') dfs(i,j-1,number);
//    else if (zone[i][j] == 'R') dfs(i,j+1,number);
//}
//
//
//int main() {
//    fast_io;
//    cin >> n >> m;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> zone[i][j];
//        }
//    }
//
//    int number = 1;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (!visited[i][j]) {
//                dfs(i,j,number);
//                number++;
//            }
//        }
//    }
//    cout << res;
//}