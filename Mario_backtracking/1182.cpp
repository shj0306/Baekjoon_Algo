#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, S, ans, check[20];
vector<int> vec;

void dfs(int idx, int sum, bool is_zero) {
    if (!is_zero && sum == S) ans++;
    for (int i = idx; i < N; i++) {
        if (!check[i]) {
            check[i] = 1; //i번 정점을 체크한채로 시뮬레이션
            dfs(i, sum + vec[i], false);
            check[i] = 0; //시뮬레이션이 끝났기 때문에 다시 해제
        }
    }
}

int main() {
    fast_io;
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        int val; cin >> val;
        vec.push_back(val);
    }
    sort(all(vec));
    dfs(0, 0, true);
    cout << ans;
}