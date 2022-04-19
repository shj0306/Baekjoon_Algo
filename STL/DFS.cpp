//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//bool visit[1000];
//
//int main() {
//    fast_io;
//    stack<int> stk;
//
//    vector<vector<int>> graph(7);
//    graph[1] = {2,3,4};
//    graph[2] = {1,5,6};
//    graph[3] = {1,4,6};
//    graph[4] = {1,3};
//    graph[5] = {2};
//    graph[6] = {2,3};
//    stk.push(1);
//    visit[1] = true;
//
//    while(!stk.empty()) {
//        int now = stk.top();
//        stk.pop();
//        cout << now << ' ';
//
//        for (auto nxt : graph[now]) {
//            if (!visit[nxt]) {
//                visit[nxt] = true;
//                stk.push(nxt);
//            }
//        }
//    }
//}