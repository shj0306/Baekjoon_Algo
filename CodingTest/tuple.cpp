/*
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int,int> pii;

bool cmp(pii p1, pii p2) {
    return p1.first > p2.first;
}

vector<int> solution(string s) {
    int ss[101010] = {};
    vector<int> answer;
    string temp;
    for (int i = 1; i < s.size()-1; i++) {
        if (s[i]-'0' >= 0 && s[i]-'0' <= 9) temp += s[i];
        else {
            if (temp.length()) ss[stoi(temp)]++; temp.clear();
        }
    }
    vector<pii> v;
    for (int i = 0; i < 101010; i++) {
        if (ss[i]) v.emplace_back(ss[i],i);
    }
    sort(begin(v), end(v), cmp);
    for (auto it : v) answer.push_back(it.second);
    return answer;
}*/
