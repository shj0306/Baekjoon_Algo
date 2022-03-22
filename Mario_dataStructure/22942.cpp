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
// * 어떤 구간이 다른 구간을 포함하려면 r이 커야한다.
// * 또한 r이 같은 구간끼리는 포함할 수 없기 때문에 겹치지 않아야 한다.
// * r에 대해 내림차순 정렬한 뒤 r이 같은 구간에 대해 스위핑하며서 겹치는 구간이 있는 지 확인
// *
// * 이제 r이 더 큰 구간과 현재 구간이 겹치는 지 확인 해야 한다. 현재 구간의 r보다 r이 큰 구간들의 끝 점을
// * 수직선상에 모두 표시해뒀다 할 때, 현재 구간이 다른 구간과 겹치는 지 여부는 [x-r, x+r] 범위에 표시가 있는지
// * 여부와 동치이고, 이는 펜윅트리를 이용하면 O(logn)에 업데이트, 쿼리를 처리할 수 있다.
// */
//
///*
// * sol2)stack
// * 구간의 시작점과 끝점을 여는 괄호와 닫는 괄호로 생각하면 올바른 괄호 문자열 문제로 환원이 가능하다.
// * 이 때 모든 괄호는 다른 종류로 생각 해야 한다.
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