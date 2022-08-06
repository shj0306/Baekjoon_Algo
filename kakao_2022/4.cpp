#include <bits/stdc++.h>
using namespace std;

int max_diff;
vector<int> ans, lion, apch;

void dfs(int score, int cnt) {

    if (cnt == 0) {
        int l = 0, ap = 0;
        for (int i = 0; i <= 10; i++) {
            if (apch[i] == 0 && lion[i] == 0) continue;
            if (apch[i] >= lion[i]) ap += 10 - i;
            else l += 10 - i;
        }
        if (max_diff < l - ap) {
            ans = lion;
            max_diff = l - ap;
        }
        else if (max_diff == l - ap) {
            for (int i = 10; i >= 0; i--) {
                if (ans[i] > lion[i]) break;
                else if (ans[i] < lion[i]) {
                    ans = lion;
                    break;
                }
            }
        }
        return;
    }

    for (int i = score; i <= 10; i++) {
        lion[i]++;
        dfs(i, cnt-1);
        lion[i]--;
    }
}

vector<int> solution(int n, vector<int> info) {

    lion.resize(11);
    apch.resize(11);
    ans.resize(11);

    for (int i = 0; i <= 10; i++) apch[i] = info[i];
    dfs(0, n);

    bool is_ans = false;
    for (int i = 0; i <= 10; i++) {
        if (ans[i]) {
            is_ans = true;
            break;
        }
    }
    if (is_ans) return ans;
    else return {-1};
}

int main() {
    vector<int> ans = solution(5, {2,1,1,1,0,0,0,0,0,0,0});
    for (auto val : ans) cout << val << ' ';
}