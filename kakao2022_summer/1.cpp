#include <bits/stdc++.h>
using namespace std;
int N;
int res[4][2];
unordered_map<int, int> score;
unordered_map<string, int> index;
string v[4];

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";

    score[1] = 3; score[2] = 2; score[3] = 1;
    score[4] = 0; score[5] = 1; score[6] = 2;
    score[7] = 3;

    index["RT"] = 0; index["TR"] = 0; index["CF"] = 1;
    index["FC"] = 1; index["JM"] = 2; index["MJ"] = 2;
    index["AN"] = 3; index["NA"] = 3;

    v[0] = "RT"; v[1] = "CF"; v[2] = "JM"; v[3] = "AN";


    for (int i = 0; i < survey.size(); i++) {
        int idx = index[survey[i]];
        int ch = choices[i];
        if (ch <= 3) { //type1이 점수를 얻는다.
            if (survey[i][0] >= survey[i][1]) {
                res[idx][1] += score[ch];
            }else {
                res[idx][0] += score[ch];
            }
        }else if (ch > 4) { //type2가 점수를 얻는다.
            if (survey[i][0] >= survey[i][1]) {
                res[idx][0] += score[ch];
            }else {
                res[idx][1] += score[ch];
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        if (res[i][0] >= res[i][1]) {
            answer.push_back(v[i][0]);
        }else if (res[i][0] < res[i][1]) {
            answer.push_back(v[i][1]);
        }
    }
    return answer;
}

int main() {
    cout << solution({"AN", "CF", "MJ", "RT", "NA"}, {5,3,2,7,5});
}