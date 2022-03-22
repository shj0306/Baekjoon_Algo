//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second
//using namespace std;
//
//int main() {
//    fast_io;
//    int N; cin >> N; //N <= 50000
//    map<string, int> ext;
//    for (int i = 0; i < N; i++) {
//        string file; cin >> file;
//        istringstream iss(file);
//        string tmp;
//        int idx = 0;
//        while(getline(iss, tmp, '.')) {
//            if (idx++) ext[tmp]++;
//        }
//    }
//    for (auto it = ext.begin(); it != ext.end(); it++) {
//        cout << it->first << ' ' << it->second << '\n';
//    }
//}