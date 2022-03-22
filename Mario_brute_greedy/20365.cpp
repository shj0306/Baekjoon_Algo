//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n;
//string str;
//
//int main() {
//    fast_io;
//    cin >> n >> str;
//    int b = 0, r = 0;
//
//    char prev = 'C';
//    for (auto color: str) {
//        if (prev == 'B' && prev != color) b++;
//        else if (prev == 'R' && prev != color) r++;
//        prev = color;
//    }
//    if (prev == 'R') r++;
//    else b++;
//    cout << min(b,r) + 1 << '\n';
//}