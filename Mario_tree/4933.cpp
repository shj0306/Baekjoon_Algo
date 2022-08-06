#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int T, N;
string node;
vector<string> info[2];

//두 트리가 비어있는 경우도 같은 경우다.
int main() {
    fast_io;
    cin >> T;
    while(T--) {
        int cnt = 0;
        while(cnt < 2) {
            cin >> node;
            if (node == "end") {
                cnt++;
                continue;
            }else info[cnt].push_back(node);
        }
    }
}