//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int val;
//vector<int> preorder;
//
//void solve(int s, int e) {
//    if (s >= e) return;
//    if (s == e-1) {
//        cout << preorder[s] << '\n';
//        return;
//    }
//    int tmp_s = s+1;
//    int tmp_e = e;
//    while(tmp_s < tmp_e) {
//        int mid = (tmp_s+tmp_e) / 2;
//        if (preorder[mid] < preorder[s]) tmp_s = mid+1;
//        else if (preorder[mid] > preorder[s]) tmp_e = mid;
//    }
//
//    solve(s+1, tmp_s);
//    solve(tmp_s, e);
//    cout << preorder[s] << '\n';
//}
//
//int main() {
//    fast_io;
//    while(cin >> val) {
//        preorder.push_back(val);
//    }
//    solve(0, (int)preorder.size());
//}