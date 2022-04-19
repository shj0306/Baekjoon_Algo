//#include <bits/stdc++.h>
//#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int n,k,input, ans;
//set<int> check;
//
//inline void set_bit(int& cur, int bit, int pos) {
//    switch (bit) {
//        case 1:
//            cur &= ~(1 << (3 * pos + 0));
//            cur &= ~(1 << (3 * pos + 1));
//            cur &= ~(1 << (3 * pos + 2));
//            break;
//        case 2:
//            cur &= ~(1 << (3 * pos + 0));
//            cur &= ~(1 << (3 * pos + 1));
//            cur |= 1 << (3 * pos + 2);
//            break;
//        case 3:
//            cur &= ~(1 << (3 * pos + 0));
//            cur |= 1 << (3 * pos + 1);
//            cur &= ~(1 << (3 * pos + 2));
//            break;
//        case 4:
//            cur &= ~(1 << (3 * pos + 0));
//            cur |= 1 << (3 * pos + 1);
//            cur |= 1 << (3 * pos + 2);
//            break;
//        case 5:
//            cur |= 1 << (3 * pos + 0);
//            cur &= ~(1 << (3 * pos + 1));
//            cur &= ~(1 << (3 * pos + 2));
//            break;
//        case 6:
//            cur |= 1 << (3 * pos + 0);
//            cur &= ~(1 << (3 * pos + 1));
//            cur |= 1 << (3 * pos + 2);
//            break;
//        case 7:
//            cur |= 1 << (3 * pos + 0);
//            cur |= 1 << (3 * pos + 1);
//            cur &= ~(1 << (3 * pos + 2));
//            break;
//        case 8:
//            cur |= 1 << (3 * pos + 0);
//            cur |= 1 << (3 * pos + 1);
//            cur |= 1 << (3 * pos + 2);
//            break;
//    }
//}
//
//inline int check_bit(int cur, int pos) {
//    bool b1 = cur & (1 << (3 * pos + 0));
//    bool b2 = cur & (1 << (3 * pos + 1));
//    bool b3 = cur & (1 << (3 * pos + 2));
//    return b1 ? (b2 ? (b3 ? 8 : 7) : (b3 ? 6 : 5)) : (b2 ? (b3 ? 4 : 3) : (b3 ? 2 : 1));
//}
//
//inline void _swap(int &cur, int st, int en) {
//    int temp = check_bit(cur, st);
//    set_bit(cur, check_bit(cur, en), st);
//    set_bit(cur, temp, en);
//}
//
//inline void _reverse(int &cur, int st, int en) {
//    for (int i = 0; i < (en - st + 1) / 2; i++) {
//        _swap(cur, st + i, en - i);
//    }
//}
//
//int main() {
//    fastio;
//    cin >> n >> k;
//    for (int i = 0; i < n; i++) {
//        int t; cin >> t;
//        set_bit(input, t, i);
//        set_bit(ans, i+1, i);
//    }
//
//    queue<pair<int,int>> q;
//    q.push({input, 0});
//    check.insert(input);
//    while(!q.empty()) {
//        //bfs
//        auto [cur, cost] = q.front();
//        q.pop();
//        if (cur == ans) {
//            cout << cost << '\n';
//            return 0;
//        }
//        for (int i = 0; i <= n - k; i++) {
//            int nxt = cur;
//            _reverse(nxt, i, i + k - 1);
//            if (check.find(nxt) == check.end()) {
//                q.push({nxt, cost+1});
//                check.insert(nxt);
//            }
//        }
//    }
//    cout << -1 << '\n';
//    return 0;
//}
////https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=jinhan814&logNo=222133470755 참고