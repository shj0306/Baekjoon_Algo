//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
///*
// * sol1) sort + fenwick tree
// * � ������ �ٸ� ������ �����Ϸ��� r�� Ŀ���Ѵ�.
// * ���� r�� ���� ���������� ������ �� ���� ������ ��ġ�� �ʾƾ� �Ѵ�.
// * r�� ���� �������� ������ �� r�� ���� ������ ���� �������ϸ缭 ��ġ�� ������ �ִ� �� Ȯ��
// *
// * ���� r�� �� ū ������ ���� ������ ��ġ�� �� Ȯ�� �ؾ� �Ѵ�. ���� ������ r���� r�� ū �������� �� ����
// * �������� ��� ǥ���ص״� �� ��, ���� ������ �ٸ� ������ ��ġ�� �� ���δ� [x-r, x+r] ������ ǥ�ð� �ִ���
// * ���ο� ��ġ�̰�, �̴� ����Ʈ���� �̿��ϸ� O(logn)�� ������Ʈ, ������ ó���� �� �ִ�.
// */
//
///*
// * sol2)stack
// * ������ �������� ������ ���� ��ȣ�� �ݴ� ��ȣ�� �����ϸ� �ùٸ� ��ȣ ���ڿ� ������ ȯ���� �����ϴ�.
// * �� �� ��� ��ȣ�� �ٸ� ������ ���� �ؾ� �Ѵ�.
// */
//
//struct info{
//    int pos, is_open, type;
//};
//
//int main() {
//    fast_io;
//    int N; cin >> N;
//    vector<info> v;
//    for (int i = 0; i < N; i++) {
//        int x, r; cin >> x >> r;
//        v.push_back({x-r, 1, i});
//        v.push_back({x+r, 0, i});
//    }
//
//    sort(all(v), [](const info & a, const info &b) {
//        return a.pos < b.pos;
//    });
//
//    auto Sol = [&]() -> bool {
//        for (int i = 1; i < v.size(); i++) if (v[i - 1].pos == v[i].pos) return false;
//        stack<int> S;
//        for (const auto& [_, is_open, type] : v) {
//            if (is_open) S.push(type);
//            else if (S.top() != type) return false;
//            else S.pop();
//        }
//        return true;
//    };
//
//    cout << (Sol() ? "YES" : "NO") << '\n';
//}