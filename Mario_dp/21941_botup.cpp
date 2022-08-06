#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
string S;
int M, dp[1001];
vector<pair<string,int>> scores;

int main() {
    fast_io;
    cin >> S >> M;
    scores.resize(M);

    for (int i = 0; i < M; i++)
        cin >> scores[i].first >> scores[i].second;

    int N = (int)S.length();
    for (int i = 1; i <= N; i++) {
        dp[i] = dp[i-1] + 1;

        for (auto [word, score] : scores) {
            if (i < word.length()) continue;
            bool chk = true;
            for (int k = 0; k < word.length(); k++) {
                if (S[i-1-k] == word[word.length()-k-1]) continue;
                chk = false;
                break;
            }
            if (!chk) continue;
            dp[i] = max(dp[i], dp[i-word.length()] + score);
        }
    }

    cout << dp[N];
}