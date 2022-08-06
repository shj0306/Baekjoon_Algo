#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int L, C, check[16];
string pw;
vector<char> vec;

//암호로서 적합한 암호인지?
bool possible() {
    int con = 0, vow = 0;
    for (auto c : pw) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') con++;
        else vow++;
    }
    return con >= 1 && vow >= 2;
}

void backtracking(int idx, int cnt) {
    if (cnt == L) {
        if (possible()) {
            cout << pw << '\n';
        }
        return;
    }
    for (int i = idx; i < C; i++) {
        if (!check[i]) {
            check[i] = 1;
            pw.push_back(vec[i]);
            backtracking(i, cnt+1);
            pw.pop_back();
            check[i] = 0;
        }
    }
}

int main() {
    fast_io;
    cin >> L >> C;

    for (int i = 0; i < C; i++) {
        char c; cin >> c;
        vec.push_back(c);
    }
    sort(all(vec));
    backtracking(0,0);
}
/*
 * 1. 모음이 1개 이상, 자음은 2개 이상
 * 2. 정렬된 상태
 *
 * a c i s t w
 */