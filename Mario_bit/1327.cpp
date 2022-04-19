//#include <bits/stdc++.h>
//#include <unordered_map>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//int N, K, ans, init_state;
//
//void set_bit(int& cur, int bit, int pos) {
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
//int check_bit(int cur, int pos) {
//    bool b1 = cur & (1 << (3 * pos + 0));
//    bool b2 = cur & (1 << (3 * pos + 1));
//    bool b3 = cur & (1 << (3 * pos + 2));
//    return b1 ? (b2 ? (b3 ? 8 : 7) : (b3 ? 6 : 5)) : (b2 ? (b3 ? 4 : 3) : (b3 ? 2 : 1));
//}
//
//void _swap(int &state, int st, int en) {
//    int temp = check_bit(state, st);
//    set_bit(state, check_bit(state, en), st);
//    set_bit(state, temp, en);
//}
//void reverse_bit(int &state, int st, int en) { //해당 상태를 idx위치에서 k개 뒤집기
//    for (int i = 0; i < (en - st + 1) / 2; i++) {
//        _swap(state, st + i, en - i);
//    }
//}
//
//int bfs(int state, int cost) {
//    unordered_map<int,int> memory;
//    queue<pair<int,int>> q; // 상태, 비용
//    q.push({state, cost});
//    memory[state] = 1;
//    while(!q.empty()) {
//        auto [cur_state, cur_cost] = q.front();
//        q.pop();
//        if (cur_state == ans) return cur_cost;
//        for (int i = 0; i < N - K + 1; i++) {
//            int nxt_state = cur_state;
//            reverse_bit(nxt_state, i, i + K-1);
//            if (memory.count(nxt_state) == 0) {
//                memory[nxt_state] = 1;
//                q.push({nxt_state, cur_cost + 1});
//            }
//        }
//    }
//    return -1;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> K;
//    for (int i = 0; i < N; i++) {
//        int num; cin >> num;
//        set_bit(init_state, num, i);
//        set_bit(ans, i+1, i);
//    }
//
//    cout << bfs(init_state, 0);
//}