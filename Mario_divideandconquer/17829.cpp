//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//const int MAX = (1<<10)+1;
//
//int n, arr[MAX][MAX];
//
//void trans(int sr, int sc, int idx, int len) {
//    vector<int> tmp;
//    for (int i = sr; i < sr+2; i++) {
//        for (int j = sc; j < sc+2; j++) {
//            tmp.push_back(arr[i][j]);
//        }
//    }
//    sort(all(tmp), greater<>());
//    int col = idx % len;
//    int row = idx / len;
//    arr[row][col] = tmp[1];
//}
//
//int solve(int sr, int sc, int er, int ec, int length) {
//    if (sr == er && sc == ec) return arr[sr][sc];
//    int idx = 0;
//    for (int i = sr; i <= er; i+=2) {
//        for (int j = sc; j <= ec; j+=2) {
//            trans(i,j,idx,length/2);
//            idx++;
//        }
//    }
//    return solve(sr,sc,(er-sr)/2,(ec-sc)/2, length/2);
//}
//
//int main() {
//    fast_io;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> arr[i][j];
//        }
//    }
//    cout << solve(0,0,n-1,n-1,n);
//}