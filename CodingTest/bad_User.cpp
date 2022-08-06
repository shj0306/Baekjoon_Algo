/*
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
map<vector<string>, int> m2;
vector<string> tmp;
vector<bool> used;
bool check(string,string);
void dfs(int, vector<string>, vector<string>);

int solution(vector<string> user_id, vector<string> banned_id) {
    int answer = 0;
    used = vector<bool>(user_id.size(), false);
    m2 = map<vector<string>,int>();
    tmp = vector<string>();
    dfs(0,user_id,banned_id);
    answer = m2.size();
    return answer;
}

bool check(string user_id, string banned_id) {
    if (user_id.length() != banned_id.length()) return false; //두 아이디 길이가 다르면 제외
    for (int i = 0; i < user_id.length(); i++) {//유저 아이디와 일치하는 지 여부 확인
        if (user_id[i] != banned_id[i] && banned_id[i] != '*') return false;
    }
    return true;
}

void dfs(int depth, vector<string> user_id, vector<string> banned_id) {
    if (depth == banned_id.size()) {
        vector<string> tt = tmp;
        sort(begin(tt), end(tt));
        if (m2[tt] == 0) m2[tt]++;
        return;
    }
    for (int i = 0; i < user_id.size(); i++) {
        if (!used[i] && check(user_id[i], banned_id[depth])) {
            used[i] = true;
            tmp.push_back(user_id[i]);
            dfs(depth+1,user_id,banned_id);
            used[i] = false;
            tmp.pop_back();
        }
    }
}
*/
