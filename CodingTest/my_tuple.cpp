/*
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <map>
using namespace std;

bool cmp(vector<string> v1, vector<string> v2) {
    return v1.size() < v2.size();
}
vector<int> solution(string s) {
    vector<int> answer;
    map<string, int> ans;
    vector<vector<string>> temp;
    stack<string> stk;
    bool is_push = false;
    string str;
    for (int i = 1; i < s.size()-1; i++) {
        if (s[i] == '{') {
            is_push = true;
            str = "";
        }else if (is_push && s[i] != ',' && s[i] != '}') {
            str.push_back(s[i]);
        }else if (is_push && s[i] == ',') {
            stk.push(str);
            str = "";
        }else if (is_push && s[i] == '}') {
            stk.push(str);
            vector<string> vs;
            while(!stk.empty()) {
                vs.push_back(stk.top());
                stk.pop();
            }
            temp.push_back(vs);
            is_push = false;
            str = "";
        }
    }
    sort(begin(temp), end(temp), cmp);
    for (auto & i : temp) {
        for (auto & j : i) {
            if (ans[j]) continue;
            answer.push_back(stoi(j));
            ans[j]++;
        }
    }
    return answer;
}*/