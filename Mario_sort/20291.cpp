//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//
//int main() {
//    fast_io;
//    cin >> N;
//    map<string,int> files;
//    for (int i = 0; i < N; i++) {
//        string file; cin >> file;
//        istringstream iss(file);
//        string tmp; int idx = 0;
//        while(getline(iss, tmp, '.')) {
//            if (idx) files[tmp]++;
//            else idx++;
//        }
//    }
//    for (auto it = files.begin(); it != files.end(); it++) {
//        cout << it->first << ' ' << it->second << '\n';
//    }
//}