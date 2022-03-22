//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MAX = 1e9;
//long long x, y, z;
//
//int main() {
//    fast_io;
//    cin >> x >> y;
//    z = y * 100 / x;
//    //99퍼는 100퍼가 될수없다.
//    if (z >= 99) {
//        cout << -1 << '\n';
//        return 0;
//    }
//
//    int s = 0, e = MAX;
//    int mid;
//    while(s <= e) {
//        mid = (s + e) / 2;
//        long long new_z = (y + mid) * 100 / (x + mid);
//        if (z < new_z) e = mid - 1;
//        else if (z == new_z) s = mid + 1;
//    }
//    cout << s;
//}