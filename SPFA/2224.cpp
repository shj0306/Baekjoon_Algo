//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int N, cnt;
//int prop[58][58];
//
//int main() {
//    fast_io;
//    cin >> N;
//    cin.ignore();
//
//    for (int i = 0; i < N; i++) {
//        string str;
//        getline(cin, str);
//        if (str[0] == str[str.length()-1]) continue;
//        if (prop[str[0]-'A'][str[str.length()-1] - 'A']) continue;
//        cnt++;
//        prop[str[0]-'A'][str[str.length()-1]-'A'] = 1;
//    }
//
//    for (int k = 0; k < 58; k++) {
//        for (int i = 0; i < 58; i++) {
//            for (int j = 0; j < 58; j++) {
//                if (prop[i][j] || i == j) continue;
//                prop[i][j] = prop[i][k] && prop[k][j];
//                if (prop[i][j]) cnt++;
//            }
//        }
//    }
//
//    cout << cnt << '\n';
//    for (int i = 0; i < 58; i++) {
//        for (int j = 0; j < 58; j++) {
//            if (prop[i][j]) {
//                cout << (char)(i + 'A') << " => " << (char)(j + 'A')<<'\n';
//            }
//        }
//    }
//}