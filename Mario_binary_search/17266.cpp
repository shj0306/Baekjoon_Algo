//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 100001;
//int N, M;
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    vector<int> v(M);
//
//    for (int i = 0; i < M; i++) cin >> v[i];
//
//    int l = 1, r = N, mid, res = N;
//    while(l <= r) {
//        // ���ε��� ����
//        mid = (l + r) / 2;
//        int cur = 0; //���� �������� ���� ���� ���� ��
//        int i = 0; bool is_success = true;
//        while(i < M && cur < N) {
//            if (v[i] - mid <= cur) cur = v[i] + mid;
//            else {
//                is_success = false;
//                break;
//            }
//            i++;
//        }
//        if (!is_success || cur < N) { //��� ������ ����
//            l = mid + 1;
//        }else {
//            res = min(res, mid);
//            r = mid - 1;
//        }
//    }
//    cout << res;
//}