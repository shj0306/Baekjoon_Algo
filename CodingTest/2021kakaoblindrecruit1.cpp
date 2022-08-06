/*
#include <bits/stdc++.h>
using namespace std;
void solve1(string &new_id) {
    for (char &i: new_id) i = tolower(i);
}
void solve2(string &new_id) {
    int idx = 0;
    while (idx < new_id.size()) {
        if ((new_id[idx] >= 'a' && new_id[idx] <= 'z') || (new_id[idx] - '0' >= 0 && new_id[idx] - '0' <= 9) ||
            (new_id[idx] == '-') || (new_id[idx] == '_') ||
            (new_id[idx] == '.')) {
            idx++;
            continue;
        }
        new_id.erase(idx, 1);
    }
}
void solve3(string &new_id) {
    int cnt = 0;
    int idx = 0;
    while (idx < new_id.size()) {
        while (new_id[idx] == '.') {
            cnt++;
            idx++;
        }
        if (cnt >= 2) new_id.replace(idx - cnt, cnt, ".");
        idx -= (cnt-1);
        cnt = 0;
    }
}
void solve4(string &new_id) {
    if (new_id[0] == '.') new_id.erase(0, 1);
    else if (new_id[new_id.size() - 1] == '.') new_id.erase(new_id.size() - 1, 1);
}
void solve5(string &new_id) {
    if (new_id.empty()) new_id = "a";
}
void solve6(string &new_id) {
    if (new_id.size() > 15) new_id.erase(15);
    solve4(new_id);
}
void solve7(string &new_id) {
    if (new_id.size() <= 2) {
        char c = new_id[new_id.size() - 1];
        while (new_id.size() < 3) new_id.push_back(c);
    }
}
string solution(string new_id) {
    string answer = "";

    solve1(new_id); solve2(new_id);
    solve3(new_id); solve4(new_id);
    solve5(new_id); solve6(new_id);
    solve7(new_id);

    answer = new_id;
    return answer;
}*/