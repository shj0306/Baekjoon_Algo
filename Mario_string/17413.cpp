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
//    string str;
//    getline(cin, str);
//    int idx1 = 0, idx2 = 0; //<, >
//    while(idx2 <= str.length()) {
//        int open_idx = (int)str.find('<', idx1);
//        int close_idx = (int)str.find('>', idx2);
//        int blank_idx, tmp_idx;
//
//        if (open_idx == string::npos || close_idx == string::npos) {
//            tmp_idx = idx2;
//            do {
//                blank_idx = (int)str.find(' ', tmp_idx);
//                if (blank_idx == string::npos) {
//                    reverse(begin(str)+tmp_idx, end(str));
//                    break;
//                }
//                reverse(begin(str)+tmp_idx, begin(str)+blank_idx);
//                tmp_idx = blank_idx+1;
//            }while(true);
//            break;
//        }
//        if (open_idx > idx1) {
//            tmp_idx = idx1;
//            do {
//                blank_idx = (int)str.find(' ', tmp_idx);
//                if (blank_idx == string::npos || blank_idx > open_idx) {
//                    reverse(begin(str)+tmp_idx, begin(str)+open_idx);
//                    break;
//                }
//                reverse(begin(str)+tmp_idx, begin(str)+blank_idx);
//                tmp_idx = blank_idx+1;
//            }while(true);
//        }
//        idx1 = idx2 = close_idx+1;
//    }
//    cout << str << '\n';
//}