//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, cnt2;
//set<int> res;
//vector<int> rome = {1,5,10,50};
//
//void back_tracking(int idx, int cnt, int ans) {
//    if (cnt == N) {
//        res.insert(ans);
//        return;
//    }
//    for (int i = idx; i < 4; i++) {
//        back_tracking(i, cnt+1, ans + rome[i]);
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    back_tracking(0, 0, 0);
//    cout << res.size();
//}