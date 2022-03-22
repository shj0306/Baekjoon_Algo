//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int a,b,c,m,tired,res;
//
//int main() {
//    fast_io;
//    cin >> a >> b >> c >> m;
//    for (int i = 1; i <= 24; i++) {
//        if (tired + a <= m) {
//            res += b;
//            tired += a;
//        }else {
//            tired = max(tired - c, 0);
//        }
//    }
//    cout << res;
//}
///*
//일을 하면 A만큼 피로가 쌓이고,
//B만큼 일을 한다.
//
//쉬면 C만큼 피로가 감소함.
//
//이 때 피로도 M을 넘기지 않고 최대한 일을 많이 하려한다.
//*/