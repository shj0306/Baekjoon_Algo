//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n, k;
//string num;
//
////https://sbl133.tistory.com/10
///*
// * stack, dq 자료구조 활용 가능
// * 입력받은 숫자가 dq.back에 있는 수보다 같거나 작을 때까지 pop을 시키고 pop할 때마다 cnt를 증가시킨다.
// * 해당 cnt가 k가 되면 나머지를 그대로 넣고 출력해준다.
// */
//
//int main() {
//    fast_io;
//    cin >> n >> k;
//
//    deque<char> dq;
//
//    int cnt = 0;
//
//    for (int i = 0; i < n; i++) {
//        char c; cin >> c;
//        while(cnt < k && !dq.empty() && dq.back() < c) {
//            dq.pop_back();
//            cnt++;
//        }
//        dq.push_back(c);
//    }
//
//    for (int i = 0; i < dq.size(); i++) cout << dq[i];
//}