/*
#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer, ans[10], possible_set;
    vector<int> temp;
    map<char, int> m; map<string, int> m2;
    string food;
    for (auto &order: orders) {
        for (auto &val: order) {
            if (m[val]) continue;
            m[val]++;
            food.push_back(val);
        }
    }
    sort(begin(food), end(food));

    for (int i : course) {
        for (int j = 0; j < i; j++) temp.push_back(1);
        for (int jj = 0; jj < food.size() - i; jj++) temp.push_back(0);
        sort(begin(temp), end(temp));
        do {
            string tmp;
            for (int k = 0; k < food.size(); k++) {
                if (temp[k]) tmp.push_back(food[k]);
            }
            possible_set.push_back(tmp);
        } while (next_permutation(temp.begin(), temp.end()));
        temp.clear();
    }

    int max_cnt = 2, idx = 0, bef_size = possible_set[0].size();
    for (auto & set_menu : possible_set) {
        int cnt = 0;
        if (set_menu.size() != bef_size) {
            bef_size = set_menu.size();
            max_cnt = 2;
            idx++;
        }
        for (auto & order : orders) {
            bool is_exist = true;
            for (int k = 0; k < set_menu.size(); k++) {
                if (order.find(set_menu[k]) == string::npos) {
                    is_exist = false;
                    break;
                }
            }
            if (is_exist) cnt++;
        }
        if (max_cnt == cnt) ans[idx].push_back(set_menu);
        else if (max_cnt < cnt) {
            ans[idx].clear();
            max_cnt = cnt;
            ans[idx].push_back(set_menu);
        }
    }

    for (auto & an : ans) {
        if (!an.empty()) for (auto &val : an) answer.push_back(val);
    }
    sort(begin(answer), end(answer));
    return answer;
}
*/
