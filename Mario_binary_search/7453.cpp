//#include <iostream>
//#include <bitset>
//#include <unordered_map>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int BASE = 1 << 29;
//int N;
//int A[4001], B[4001], C[4001], D[4001];
//bitset<(1<<30)+1> isExist;
//unordered_map<int,int> sumCount;
//
//
//void add(int num) {
//    if (!isExist[num + BASE]) isExist[num + BASE] = true;
//    else sumCount[num]++;
//}
//
//int getCount(int num) {
//    if(!isExist[num + BASE]) return 0;
//    auto iter = sumCount.find(num);
//    return iter == sumCount.end() ? 1 : iter -> second + 1;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    sumCount.rehash(1 << 24);
//    for (int i = 0; i < N; i++) cin >> A[i] >> B[i] >> C[i] >> D[i];
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            add(A[i]+B[j]);
//        }
//    }
//    long long cnt = 0;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cnt += getCount(-(C[i] + D[j]));
//        }
//    }
//    cout << cnt;
//}
////evelyn82님 코드 참고함