//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int N, res;
//vector<pii> consult;
//
//void solve(int day, int pay) {
//    if (day == N+1) { //����ϴ� ��
//        res = max(res, pay);
//        return;
//    }
//    if (day > N+1) return;
//    solve(day+1, pay); //�ش� �� ��� ���� ����
//    solve(day+consult[day].first, pay + consult[day].second);//���� ��
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    consult = vector<pii>(N+1);
//    for (int i = 1; i <= N; i++) cin >> consult[i].first >> consult[i].second;
//
//    solve(1, 0);
//    cout << res;
//}
//
///*
// * data : ��糯, �� ����� �ð��� �ݾ�
// * ���� : ����� �ϰ� �Ǹ� �ش� �Ⱓ ���� �ٸ� ����� �� �� ����.
// * ��� : �ִ� ����
// */