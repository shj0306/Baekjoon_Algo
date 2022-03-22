//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//#define f first
//#define s second;
//
//int N, M, res;
//int paper[4][4];
//bool check[4][4]; //�ش� ���� ������ �̹� �̷������ �� �Ǵ�
//
//void solve(int idx, int sum) {
//    int r = idx / M;
//    int c = idx % M;
//
//    if (idx >= N * M) { //��� ���� ����ߴٸ�
//        res = max(res, sum);
//        return;
//    }
//    if (check[r][c]) solve(idx+1, sum);
//    else {
//        int val, nr, nc;
//        val = paper[r][c];
//        check[r][c] = true;
//        solve(idx+1, sum + val); //cut
//        check[r][c] = false;
//
//        //�ش� ��ġ���� ������
//        for (int k = 1; k <= N - r - 1; k++) {
//            nr = r + k;
//            nc = c;
//            val *= 10;
//            val += paper[nr][nc];
//            for (int j = 1; j <= k; j++) check[r+j][nc] = true;
//            solve(idx+1, sum + val);
//            for (int j = 1; j <= k; j++) check[r+j][nc] = false;
//        }
//        val = paper[r][c];
//
//        //�ش� ��ġ���� ����������
//        for (int k = 1; k <= M - c - 1; k++) {
//            nr = r;
//            nc = c + k;
//            if (check[nr][nc]) return;
//            val *= 10;
//            val += paper[nr][nc];
//            for (int j = 1; j <= k; j++) check[nr][c+j] = true;
//            solve(idx+1, sum + val);
//            for (int j = 1; j <= k; j++) check[nr][c+j] = false;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            char c; cin >> c;
//            paper[i][j] = c - '0';
//        }
//    }
//    solve(0,0);
//    cout << res;
//}