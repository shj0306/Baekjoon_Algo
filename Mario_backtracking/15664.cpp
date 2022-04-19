//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M, arr[8], check[8];
//vector<int> tmp;
//
//void back_tracking(int idx, int cnt) {
//    if (cnt == M) {
//        for (auto val : tmp) {
//            cout << val <<  ' ';
//        }
//        cout << '\n';
//        return;
//    }
//
//    int prev_num = -1;
//
//    for (int i = idx; i < N; i++) {
//        if (!check[i] && prev_num != arr[i]) {
//            prev_num = arr[i];
//            check[i] = 1;
//            tmp.push_back(arr[i]);
//            back_tracking(i+1, cnt+1);
//            tmp.pop_back();
//            check[i] = 0;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    for (int i = 0; i < N; i++)
//        cin >> arr[i];
//
//    sort(arr, arr+N);
//
//    back_tracking(0, 0);
//}