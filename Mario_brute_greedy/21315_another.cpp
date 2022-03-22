//#include <stdio.h>
//#include <algorithm>
//#include <assert.h>
//#include <bitset>
//#include <cmath>
//#include <complex>
//#include <deque>
//#include <functional>
//#include <iostream>
//#include <limits.h>
//#include <map>
//#include <math.h>
//#include <queue>
//#include <set>
//#include <stdlib.h>
//#include <string.h>
//#include <string>
//#include <time.h>
//#include <unordered_map>
//#include <unordered_set>
//#include <vector>
//
//#pragma warning(disable:4996)
//#pragma comment(linker, "/STACK:336777216")
//using namespace std;
//
//#define mp make_pair
//#define Fi first
//#define Se second
//#define pb(x) push_back(x)
//#define szz(x) ((int)(x).size())
//#define rep(i, n) for(int i=0;i<n;i++)
//#define all(x) (x).begin(), (x).end()
//#define ldb ldouble
//
//typedef tuple<int, int, int> t3;
//typedef long long ll;
//typedef unsigned long long ull;
//typedef double db;
//typedef long double ldb;
//typedef pair <int, int> pii;
//typedef pair <ll, ll> pll;
//typedef pair <ll, int> pli;
//typedef pair <db, db> pdd;
//
//int IT_MAX = 1 << 20;
//const ll MOD = 1000000007;
//const int INF = 0x3f3f3f3f;
//const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
//const db PI = acos(-1);
//const db ERR = 1e-10;
//
//vector <int> myshuffle(vector <int> Vl, int K) {
//    vector <int> Vr;
//    Vr.push_back(Vl.back());
//    Vl.pop_back();
//    for (int i = 0; i < K; i++) {
//        int L = (1 << i);
//        for (int j = Vl.size() - L; j < Vl.size(); j++) Vr.push_back(Vl[j]);
//        for (int j = 0; j < L; j++) Vl.pop_back();
//    }
//    for (auto it : Vl) Vr.push_back(it);
//    return Vr;
//}
//
//int in[1050];
//int main() {
//    int N;
//    cin >> N;
//    for (int i = 0; i < N; i++) cin >> in[i];
//
//    vector <int> Vs;
//    for (int i = 0; i < N; i++) Vs.push_back(i + 1);
//
//    for (int i = 1; (1 << i) < N; i++) {
//        vector <int> Vu = myshuffle(Vs, i);
//        for (int j = 1; (1 << j) < N; j++) {
//            vector <int> Vu2 = myshuffle(Vu, j);
//
//            int k;
//            for (k = 0; k < N; k++) if (Vu2[k] != in[k]) break;
//            if (k >= N) return !printf("%d %d\n", i, j);
//        }
//    }
//    return 0;
//}