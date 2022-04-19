//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define all2(x) begin(x), end(x)
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M, arr[9], checked[9];
//vector<int> tmp;
//
//void NandM9(int idx, int cnt) {
//    if (cnt == M) { //m개를 모두 추출하면
//        for (auto val : tmp) cout << val << ' ';
//        cout << '\n';
//        return;
//    }
//    int prev = 0; //바로 이전 수
//    for (int i = 0; i < N; i++) {
//        if (!checked[i]) {
//            if (prev == arr[i]) continue;
//            prev = arr[i];
//            checked[i] = true;
//            tmp.push_back(arr[i]);
//            NandM9(i, cnt + 1);
//            tmp.pop_back();
//            checked[i] = false;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    for (int i = 0; i < N; i++) cin >> arr[i];
//    sort(begin(arr), begin(arr)+N);
//    NandM9(0, 0);
//}