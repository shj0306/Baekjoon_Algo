/*
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int answer;
set<vector<string> > st;
vector<bool> used;
vector<string> vt;
bool check(string user, string ban){
    if (user.size() != ban.size()) return false;
    for (int i = 0;i < user.length(); i++){
        if (ban[i]!='*' && user[i] != ban[i]) return false;
    }
    return true;
}
void dfs(int cnt, vector<string> user_id, vector<string> banned_id){
    if (cnt == banned_id.size()){
        vector<string> tmp_v = vt;
        sort(tmp_v.begin(),tmp_v.end());
        if (st.count(tmp_v)==0){
            st.insert(tmp_v);
            answer++;
        }
        return;
    }
    for (int i = 0;i < user_id.size(); i++){
        if (!used[i] && check(user_id[i],banned_id[cnt])){
            used[i] = true;
            vt.push_back(user_id[i]);
            dfs(cnt+1,user_id,banned_id);
            used[i] = false;
            vt.pop_back();
        }
    }
}
int solution(vector<string> user_id, vector<string> banned_id) {
    answer = 0;
    used = vector<bool>(user_id.size(),false);
    dfs(0,user_id,banned_id);
    return answer;
}*/
