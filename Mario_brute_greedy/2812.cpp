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
// * stack, dq �ڷᱸ�� Ȱ�� ����
// * �Է¹��� ���ڰ� dq.back�� �ִ� ������ ���ų� ���� ������ pop�� ��Ű�� pop�� ������ cnt�� ������Ų��.
// * �ش� cnt�� k�� �Ǹ� �������� �״�� �ְ� ������ش�.
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