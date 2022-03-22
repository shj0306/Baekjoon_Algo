//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//
//pair<int,int> alpha[26] = {
//        {1,0}, {2,4}, {2,2}, {1,2}, {0,2},
//        {1,3}, {1,4}, {1,5}, {0,7}, {1,6},
//        {1,7}, {1,8}, {2,6}, {2,5}, {0,8},
//        {0,9}, {0,0}, {0,3}, {1,1}, {0,4},
//        {0,6}, {2,3}, {0,1}, {2,1}, {0,5},
//        {2,0}};
//
//int main() {
//    fast_io;
//    char l, r; cin >> l >> r;
//    int res = 0;
//    string word; cin >> word;
//
//    set<char> left;
//    left = {'q','w','e','r','t','a','s','d','f','g','z','x','c','v'};
//
//    for (auto key : word) {
//        if (key == l || key == r) res++;
//        else {
//            auto [x, y] = alpha[key-'a'];
//            if (left.find(key) != left.end()) {
//                auto [lx, ly] = alpha[l-'a'];
//                int ret_l = abs(lx-x) + abs(ly-y);
//                res += ret_l + 1;
//                l = key;
//            }else {
//                auto [rx, ry] = alpha[r-'a'];
//                int ret_r = abs(rx-x) + abs(ry-y);
//                res += ret_r + 1;
//                r = key;
//            }
//        }
//    }
//    cout << res;
//}