//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//int N, M, ans, arr[26][26];
//
//bool is_nemmo(int r, int c) {
//    return arr[r - 1][c] && arr[r][c - 1] && arr[r - 1][c - 1];
//}
//
//void back_tracking(int num) {
//    if (num == N * M) {
//        ans++;
//        return;
//    }
//    int r = num / M + 1;
//    int c = num % M + 1;
//    //��ĥ�ϰ� ����ĭ����
//    back_tracking(num+1);
//    // ĥ���� �� �۸�۸� ���� �ʴ� ��쿡��
//    if (!is_nemmo(r,c)) {
//        arr[r][c] = 1;
//        back_tracking(num+1);
//        arr[r][c] = 0;
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    back_tracking(0);
//    cout << ans;
//}
////tony9402�� �ڵ� ����