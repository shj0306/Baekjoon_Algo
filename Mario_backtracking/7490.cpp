#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int T, N, arr[10];

bool is_zero(const string& expr) {
    string num1, num2;
    int res = 0;
    char op = ' ';
    bool bef_op = true;
    for (auto c : expr) {
        if (c == ' ') continue;
        if (c >= '1' && c <= '9') { //숫자냐
            if (bef_op) num1.push_back(c);
            else num2.push_back(c);
        }else { //연산자
            if (bef_op) {
                op = c;
                bef_op = false;
            }else {
                if (op == '+') res = stoi(num1) + stoi(num2);
                else res = stoi(num1) - stoi(num2);
                num1 = to_string(res);
                num2.clear();
                op = c;
            }
        }
    }
    if (op == '+') return stoi(num1) + stoi(num2) == 0;
    else if (op == '-') return stoi(num1) - stoi(num2) == 0;
    else return stoi(num1) == 0;
}

void back_tracking(int idx, string expr) {
    if (idx == N) {
        if (is_zero(expr)) cout << expr << '\n';
        return;
    }

    expr.push_back(' '); expr.push_back(arr[idx]+'0');
    back_tracking(idx+1, expr);
    expr.pop_back(); expr.pop_back();

    expr.push_back('+'); expr.push_back(arr[idx]+'0');
    back_tracking(idx+1,expr);
    expr.pop_back(); expr.pop_back();

    expr.push_back('-'); expr.push_back(arr[idx]+'0');
    back_tracking(idx+1,expr);
    expr.pop_back(); expr.pop_back();
}

int main() {
    fast_io;
    cin >> T;
    while(T--) {
        cin >> N;
        for (int i = 0; i < N; i++) arr[i] = i+1;
        back_tracking(1, to_string(arr[0]));
        cout << '\n';
    }
}