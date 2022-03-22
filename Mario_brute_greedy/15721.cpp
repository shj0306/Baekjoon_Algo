//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//
//int a,t,s;
//int bbun, degi;
//
//int solve() {
//    int tried = 1;
//    while(true) {
//        for (int i = 0; i < 4; i++) {
//            if (i % 2 == 0) bbun++;
//            else degi++;
//
//            if (bbun == t && s == 0) return (bbun+degi-1) % a;
//            if (degi == t && s == 1) return (bbun+degi-1) % a;
//        }
//
//        for (int i = 0; i < tried + 1; i++) {
//            bbun++;
//            if (bbun == t && s == 0) {
//                return (bbun+degi-1) % a;
//            }
//        }
//        for (int i = 0; i < tried + 1; i++) {
//            degi++;
//            if (degi == t && s == 1) {
//                return (bbun+degi-1)%a;
//            }
//        }
//        tried++;
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> a >> t >> s; //t번째 뻔 혹은 데기를 외치는 사람 번호
//    cout << solve() << '\n';
//}