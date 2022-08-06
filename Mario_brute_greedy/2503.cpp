#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, check[10], ans;
struct Info {
    string num;
    int strike{},ball{};
};
vector<Info> vec;

bool is_possible(const string& num) {
    for (auto c : num) {
        if (c == '0') return false;
        if (!check[c-'0']) check[c-'0']++;
        else return false;
    }
    return true;
}

bool is_correct(const string& num1, const string& num2, int strike, int ball) {
    int st = 0, ba = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (num1[i] == num2[j]) {
                if (i == j) st++;
                else ba++;
            }
        }
    }
    return st == strike && ba == ball;
}

int main() {
    fast_io;
    cin >> N;
    vec.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> vec[i].num >> vec[i].strike >> vec[i].ball;
    }

    for (int num = 123; num < 999; num++) {
        memset(check, 0, sizeof(check));
        if (is_possible(to_string(num))) {
            bool possi = true;
            for (int i = 0; i < N; i++){
                if (!is_correct(to_string(num), vec[i].num,
                                vec[i].strike, vec[i].ball)) {
                    possi = false;
                    break;
                }
            }
            if (possi) ans++;
        }
    }

    cout << ans;
}