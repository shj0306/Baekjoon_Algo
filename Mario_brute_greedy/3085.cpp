//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//int N;
//int dx[] = {1,-1,0,0};
//int dy[] = {0,0,1,-1};
//vector<string> candy;
//
//int can_eat_candy() {
//
//    int max_candy = 0, cnt;
//    char cur_color;
//    for (int i = 0; i < N; i++) {
//        cur_color = candy[i][0];
//        cnt = 1;
//        for (int j = 1; j < N; j++) {
//            if (cur_color == candy[i][j]) cnt++;
//            else {
//                max_candy = max(max_candy, cnt);
//                cur_color = candy[i][j];
//                cnt = 1;
//            }
//        }
//        max_candy = max(max_candy, cnt);
//    }
//
//    for (int i = 0; i < N; i++) {
//        cur_color = candy[0][i];
//        cnt = 1;
//        for (int j = 1; j < N; j++) {
//            if (cur_color == candy[j][i]) cnt++;
//            else {
//                max_candy = max(max_candy, cnt);
//                cur_color = candy[j][i];
//                cnt = 1;
//            }
//        }
//        max_candy = max(max_candy, cnt);
//    }
//
//    return max_candy;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    for (int i = 0; i < N; i++) {
//        string str; cin >> str;
//        candy.push_back(str);
//    }
//
//    int eat_candy = 0;
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            char cur_color = candy[i][j];
//            for (int k = 0; k < 4; k++) {
//                int nx = j + dx[k];
//                int ny = i + dy[k];
//                if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
//                if (candy[ny][nx] == cur_color) continue;
//                swap(candy[ny][nx], candy[i][j]);
//                eat_candy = max(eat_candy, can_eat_candy());
//                swap(candy[ny][nx], candy[i][j]);
//            }
//        }
//    }
//    cout << eat_candy;
//}
