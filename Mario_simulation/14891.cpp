//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int k;
//int direction[5];
//vector<string> wheel;
//
//void turn_right(int idx) { //시계 방향으로 1칸 돌린다.
//    char c = wheel[idx].back();
//    wheel[idx].insert(begin(wheel[idx]), c);
//    wheel[idx].pop_back();
//}
//
//void turn_left(int idx) {
//    char c = wheel[idx].front();
//    wheel[idx].push_back(c);
//    wheel[idx].erase(0, 1);
//}
//
//int main() {
//    fast_io;
//    wheel = vector<string> (5);
//    for (int i = 1; i <= 4; i++) cin >> wheel[i];
//    cin >> k;
//    int res = 0;
//
//    for (int i = 0; i < k; i++) {
//        memset(direction, 0, sizeof(direction));
//        int idx, dir;
//        cin >> idx >> dir;
//        direction[idx] = dir;
//
//        if (idx > 1 && wheel[idx-1][2] != wheel[idx][6]) {
//            direction[idx-1] = (dir == -1 ? 1 : -1);
//            int bef_wheel = idx-1;
//            for (int j = idx-2; j >= 1; j--) {
//                if (wheel[j][2] != wheel[bef_wheel][6]) {
//                    direction[j] = (direction[bef_wheel] == -1 ? 1 : -1);
//                    bef_wheel = j;
//                }else break;
//            }
//        }
//        if (idx < 4 && wheel[idx][2] != wheel[idx+1][6]) {
//            direction[idx+1] = (dir == -1 ? 1 : -1);
//            int bef_wheel = idx+1;
//            for (int j = idx+2; j <= 4; j++) {
//                if (wheel[bef_wheel][2] != wheel[j][6]) {
//                    direction[j] = (direction[bef_wheel] == -1 ? 1 : -1);
//                    bef_wheel = j;
//                }else break;
//            }
//        }
//
//        for (int d = 1; d <= 4; d++) {
//            if (direction[d] == 1) turn_right(d);
//            if (direction[d] == -1) turn_left(d);
//        }
//    }
//    for (int i = 1; i <= 4; i++)
//        if (wheel[i][0] == '1') res += (1 << (i-1));
//    cout << res;
//}