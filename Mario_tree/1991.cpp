//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//vector<pii> tree;
//
////전위 순회
//void preorder(int root) {
//    cout << (char)(root + 'A');
//    int lc = tree[root].first;
//    if (lc != -1) preorder(lc);
//    int rc = tree[root].second;
//    if (rc != -1) preorder(rc);
//}
//
////중위 순회
//void inorder(int root) {
//    int lc = tree[root].first;
//    if (lc != -1) inorder(lc);
//    cout << (char)(root + 'A');
//    int rc = tree[root].second;
//    if (rc != -1) inorder(rc);
//}
////후위 순회
//void postorder(int root) {
//    int lc = tree[root].first;
//    if (lc != -1) postorder(lc);
//    int rc = tree[root].second;
//    if (rc != -1) postorder(rc);
//    cout << (char)(root + 'A');
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    tree.resize(N+1);
//
//    for (int i = 1; i <= N; i++) {
//        char p, c1, c2;
//        cin >> p >> c1 >> c2;
//        if (c1 == '.' && c2 != '.')
//            tree[p-'A'] = make_pair(-1, c2-'A');
//        else if (c1 != '.' && c2 == '.')
//            tree[p-'A'] = make_pair(c1-'A', -1);
//        else if (c1 != '.' && c2 != '.')
//            tree[p-'A'] = make_pair(c1-'A', c2-'A');
//        else tree[p-'A'] = make_pair(-1, -1);
//    }
//
//    preorder(0);
//    cout << '\n';
//    inorder(0);
//    cout << '\n';
//    postorder(0);
//}