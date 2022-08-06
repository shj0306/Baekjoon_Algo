#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, K, check[10];
string card[10];
vector<string> tmp;
set<string> num_set;

void make_number(string num, int state) {
    if (state == (1 << K) - 1) {
        num_set.insert(num);
        return;
    }
    for (int i = 0; i < K; i++) {
        if ((state & (1 << i)) == 0) {
            make_number(num + tmp[i], state | (1 << i));
        }
    }
}

void select_card(int idx, int cnt) {

    if (cnt == K) {
        make_number("", 0);
        return;
    }
    for (int i = idx; i < N; i++) {
        if (!check[i]) {
            check[i] = 1;
            tmp.push_back(card[i]);
            select_card(i, cnt + 1);
            tmp.pop_back();
            check[i] = 0;
        }
    }
}

int main() {
    fast_io;
    cin >> N >> K;

    for (int i = 0; i < N; i++) cin >> card[i];
    select_card(0, 0);
    cout << num_set.size() << '\n';
}