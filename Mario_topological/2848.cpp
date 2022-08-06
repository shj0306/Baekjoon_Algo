#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, cnt, indegree[26], alpha[26];
string ans;
vector<string> words;
vector<int> adj[26];
bool is_possible = true, is_single = true;

//큐 사이즈가 2 이상이어도 느낌표가 나올 수 있기때문에 계속 해야 한다.

int main() {
    fast_io;
    cin >> N;
    string word;

    for (int i = 0; i < N; i++) {
        cin >> word;
        for (auto c : word) {
            if (!alpha[c-'a']) {
                cnt++;
                alpha[c-'a'] = 1;
            }
        }
        words.push_back(word);
    }

    for (int i = 1; i < N; i++) {
        int cur_sz = (int)words[i].length();
        int prev_sz = (int)words[i-1].length();
        int len = min(cur_sz, prev_sz);

        for (int j = 0; j < len; j++) {
            if (words[i-1][j] != words[i][j]) {
                adj[words[i-1][j]-'a'].push_back(words[i][j]-'a');
                indegree[words[i][j]-'a']++;
                break;
            }
            if (j == len - 1) {
                if (prev_sz > cur_sz) is_possible = false;
            }
        }
        //접두어가 동일한데 이전 단어의 길이가 더 긴 경우 모순 발생
    }

    queue<int> q;

    for (int i = 0; i < 26; i++) {
        if (alpha[i] && indegree[i] == 0)
            q.push(i);
    }

    while(!q.empty()) {
        if (q.size() > 1) is_single = false;
        int cur = q.front();
        ans.push_back((char)(cur+'a'));
        q.pop();

        for (auto nxt : adj[cur]) {
            if (--indegree[nxt] == 0) q.push(nxt);
        }
    }

    if (ans.length() != cnt) is_possible = false;
    if (!is_possible) cout << "!";
    else if (!is_single) cout << "?";
    else cout << ans;
}