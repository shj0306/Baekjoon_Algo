//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M, arr[9];
//bool check[9];
//vector<int> tmp;
//
//void back_tracking(int cnt) {
//
//    /// m개의 수열을 모두 뽑은 경우 출력 후 리턴
//    if (cnt == M) {
//        for (auto val : tmp) {
//            cout << val << ' ';
//        }
//        cout << '\n';
//        return;
//    }
//
//    for (int i = 0; i < N; i++) {
//        /// 같은 수 중복 방지
//        if (!check[i]) {
//            check[i] = true;
//            tmp.push_back(arr[i]);
//            back_tracking(cnt+1);
//            /// 복구
//            tmp.pop_back();
//            check[i] = false;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//
//    for (int i = 0; i < N; i++) cin >> arr[i];
//
//    /// 사전순 정렬을 위해서
//    sort(arr, arr+N);
//    back_tracking(0);
//}