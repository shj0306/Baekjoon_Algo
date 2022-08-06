#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int INF = 1e9;
int D, P, dp1[100001], dp2[100001];
vector<pii> pipe;
//https://gusdnr69.tistory.com/255
//처음에 dp배열을 dp[351][100001]으로 잡아서 메모리초과 발생
//코드자체는 정답코드와 똑같았다.

int main() {
    fast_io;
    cin >> D >> P;
    pipe.resize(P+1);

    for (int i = 1; i <= P; i++)
        cin >> pipe[i].first >> pipe[i].second;

    for (int i = 1; i <= P; i++) {
        auto [l,c] = pipe[i];
        for (int j = 1; j <= D; j++) {
            if (j == l) dp1[j] = max(dp1[j], c);

            if (j > l) {
                if (dp2[j-l] != 0)
                    dp1[j] = max(dp1[j], min(c, dp2[j-l]));
            }
        }
        for (int j = 1; j <= D; j++) dp2[j] = dp1[j];
    }
    cout << dp1[D];
}