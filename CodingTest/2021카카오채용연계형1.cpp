/*
#include <bits/stdc++.h>
using namespace std;
map<string,char> m;
int solution(string s) {
    int answer = 0;
    m["zero"] = '0'; m["one"] = '1'; m["two"] = '2'; m["three"] = '3';
    m["four"] = '4'; m["five"] = '5'; m["six"] = '6'; m["seven"] = '7';
    m["eight"] = '8'; m["nine"] = '9';
    string ans, temp;
    for (char i : s) {
        if (i - '0' >= 0 && i - '0' <= 9)
            ans.push_back(i);
        else {
            temp.push_back(i);
            if (m[temp]) {
                ans.push_back(m[temp]);
                temp.clear();
            }
        }
    }
    answer = stoi(ans);
    return answer;
}*/