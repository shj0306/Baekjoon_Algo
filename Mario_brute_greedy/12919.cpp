//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//string s,t;
//
//int bfs() {
//    set<string> memory;
//    queue<string> q;
//    q.push(t);
//
//    while(!q.empty()) {
//        string now = q.front();
//        q.pop();
//        if (now == s) return 1;
//        string tmp = now;
//        if (tmp[tmp.length()-1] == 'A') q.push(tmp.substr(0,tmp.length()-1));
//        if (tmp[0] == 'B') {
//            reverse(begin(tmp)+1, end(tmp));
//            q.push(tmp.substr(1));
//        }
//    }
//    return 0;
//}
//
//int main() {
//    fast_io;
//    cin >> s >> t;
//    cout << bfs();
//}