//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, k, parent[1001];
//vector<vector<int>> tree;
//
//int main() {
//    fast_io;
//    while(true) {

//        cin >> N >> k;
//        if (N == 0 && k == 0) break;
//        tree = vector<vector<int>> (N+1);
//        memset(parent, -1, sizeof(parent));
//
//        int k_idx, root, pre;
//        for (int i = 0; i < N; i++) {
//            int num; cin >> num;
//            if (num == k) k_idx = i;
//            if (i) {
//                if (i != 1 && num != pre + 1) root++;
//                tree[root].push_back(i);
//                parent[i] = root;
//            }else root = i;
//            pre = num;
//        }
//        int k_parent = parent[k_idx];
//        int res = 0;
//        for (int i = 0; i < N; i++) {
//            if (k_parent == i) continue;
//            if (parent[k_parent] == parent[i]) {
//                res += (int)tree[i].size();
//            }
//        }
//        cout << res << '\n';
//    }
//}