#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int G, int_x;
double x;
vector<int> ans;
//연립방정식으로 해결
//double로 받은 값과 int로 받은 값이 같을 때만 정답

int main() {
    fast_io;
    cin >> G;

    for (int i = 1; i < (G+1) / 2; i++) {
        if (G % i == 0 && i < G / i) {
            x = ((double)G / i + i) / 2;
            int_x = (G / i + i) / 2;
            if (x == int_x) {
                ans.push_back(int_x);
            }
        }
    }
    if (ans.empty()) cout << -1;
    else {
        sort(all(ans));
        for (auto val : ans)
            cout << val << '\n';
    }
}