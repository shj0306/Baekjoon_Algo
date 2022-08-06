//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, ans, arr[5][5];
//bool check[5][5];
//
//void dfs(int cnt, int sum) {
//
//    ans = max(ans, sum);
//
//    if (cnt == 4)
//        return;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//
//            // Case 1.
//            // (i, j)�� (i, j + 1) �̷��� 2���� ���ο� ���� ����� ���ϴ�.
//            // ���� �� ��ġ ��� ���õ� ���� ����߸� �����մϴ�.
//            if (j + 1 <= N && !check[i][j] && !check[i][j+1]) {
//                check[i][j] = check[i][j+1] = true;
//                dfs(cnt+1, sum + arr[i][j] + arr[i][j+1]);
//                check[i][j] = check[i][j+1] = false;
//            }
//
//            // Case 2.
//            // (i, j)�� (i + 1, j) �̷��� 2���� ���ο� ���� ����� ���ϴ�.
//            // ���� �� ��ġ ��� ���õ� ���� ����߸� �����մϴ�.
//            if (i + 1 <= N && !check[i][j] && !check[i+1][j]) {
//                check[i][j] = check[i+1][j] = true;
//                dfs(cnt+1, sum + arr[i][j] + arr[i+1][j]);
//                check[i][j] = check[i+1][j] = false;
//            }
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            cin >> arr[i][j];
//        }
//    }
//
//    dfs(0, 0);
//    cout << ans;
//}