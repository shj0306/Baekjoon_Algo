//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//
//int n;
//int par[10];
//
////해당 노드의 루트를 찾아내는 함수
//int find(int node) {
//    if (par[node] == node) return node;
//    return par[node] = find(par[node]);
//}
//
////node1의 트리와 node2의 트리를 합친다.
//void union_set(int node1, int node2) {
//    int root1 = find(node1);
//    int root2 = find(node2);
//
//    if (root1 == root2) return;
//    if (root1 < root2) par[root2] = root1;
//    else par[root1] = root2;
//}
//
//
//int main() {
//    fast_io;
//    cin >> n;
//    for (int i = 1; i <= n; i++) par[i] = i;
//}
//
