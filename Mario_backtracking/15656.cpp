//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M, arr[7];
//vector<int> tmp;
//
//void back_tracking(int cnt) {
//    if (cnt == M) {
//        for (auto val : tmp) {
//            cout << val << ' ';
//        }
//        cout << '\n';
//        return;
//    }
//
//    int prev_num = -1;
//
//    for (int i = 0; i < N; i++) {
//        if (prev_num != arr[i]) {
//            prev_num = arr[i];
//            tmp.push_back(arr[i]);
//            back_tracking(cnt+1);
//            tmp.pop_back();
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
//    sort(arr, arr+N);
//    back_tracking(0);
//}