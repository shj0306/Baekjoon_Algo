#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    answer.resize(id_list.size());
    //유저, 인덱스
    map<string, int> users;
    //신고한 사람, 신고당한 사람
    map<int, set<int>> reports;
    //신고당한 사람, 신고한 사람
    map<int, set<int>> reported;

    for (int i = 0; i < id_list.size(); i++)
        users[id_list[i]] = i;

    for (int i = 0; i < report.size(); i++) {
        istringstream iss(report[i]);

        int idx = 0;
        string tmp[2];

        while(getline(iss, tmp[idx], ' ')) {
            idx++;
        }
        reports[users[tmp[0]]].insert(users[tmp[1]]);
        reported[users[tmp[1]]].insert(users[tmp[0]]);
    }

    for (auto it = reported.begin(); it != reported.end(); it++) {
        set<int> temp = it->second;
        if (temp.size() < k) continue;
        for (auto it2 = temp.begin(); it2 != temp.end(); it2++)
            answer[*it2]++;
    }
    return answer;
}

int main() {
    vector<int> answer = solution({"muzi", "frodo", "apeach", "neo"}, {"muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi"}, 2);

    for (auto val : answer) cout << val << ' ';
}