//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//#define int int64_t
//
//struct {
//    int Month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//
//    int operator() (string &s) {
//        int D = stoi(s.substr(0,3));
//        int h = stoi(s.substr(4,2));
//        int m = stoi(s.substr(7,2));
//        return D * 1440 + h * 60 + m;
//    }
//
//    int operator() (string &s1, string &s2) {
//        int M = stoi(s1.substr(5,2));
//        int D = stoi(s1.substr(8,2));
//        int h = stoi(s2.substr(0,2));
//        int m = stoi(s2.substr(3,2));
//        return (accumulate(Month, Month+M, 0) + D) * 1440 + h * 60 + m;
//    }
//}ParseDate;
//
//struct Info{
//    int v{};
//    map<string, int> M;
//};
//map<string, Info> I;
//
//int32_t main() {
//    fast_io;
//    string s; int n,k; cin >> n >> s >> k;
//    int m = ParseDate(s);
//
//    while(n--) {
//        string s1,s2,a,b; cin >> s1 >> s2 >> a >> b;
//        int t = ParseDate(s1,s2);
//        auto &cur = I[b];
//        if (cur.M.count(a)) {
//            cur.v += max<int>((t-cur.M[a]-m) * k, 0);
//        }else cur.M[a] = t;
//    }
//
//    int flag = 0;
//    for (auto& [a,b] : I) if (b.v) flag = 1;
//    if (!flag) cout << -1;
//    else for (auto& [a,b] : I) {
//        if (b.v) cout << a << ' ' << b.v << '\n';
//    }
//}