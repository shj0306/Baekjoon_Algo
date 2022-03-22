/*
#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
using namespace std;
const int MAX = 101;

string s;
int n, dp[MAX];
vector<string> words;

bool cmp(string s1, string s2) {
    return s1.size() < s2.size();
}

int solve(int i) {
    int &ret = dp[i];
    if (ret != -1) return ret;
    if (i == s.length()) return ret = 1;
    ret = 0;
    for (auto &word: words) {
        if (s.substr(i, word.size()) == word)
            ret = max(ret, solve(i + word.size()));
    }
    return ret;
}

int main() {
    cin >> s >> n;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        words.push_back(word);
    }
    sort(all(words), cmp);
    cout << solve(0) << '\n';
}
*/
