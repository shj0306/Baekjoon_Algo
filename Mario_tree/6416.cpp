#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int, int>;
using ll = long long;
int N, u, v, edge_cnt, is_tree;
set<int> vertex;
map<int, int> indegree;

int main() {
    fast_io;
    for (int t = 1;; t++) {
       vertex.clear();
       indegree.clear();
       edge_cnt = 0;

       while(true) {
           cin >> u >> v;
           if (u == -1 && v == -1) return 0;
           else if (u == 0 && v == 0) break;

           vertex.insert(u);
           vertex.insert(v);
           indegree[v]++;

           edge_cnt++;
       }

       int root = 0;
       is_tree = true;
       for (auto it = vertex.begin(); it != vertex.end(); it++) {
           if (indegree.find(*it) == indegree.end())
               root++;
       }

       if (vertex.empty() || is_tree && root == 1 && edge_cnt + 1 == vertex.size())
           cout << "Case " << t << " is a tree." << '\n';
       else
           cout << "Case " << t << " is not a tree." << '\n';
    }
}