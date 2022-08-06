#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <set>
using namespace std;

vector<string> split(string& s, const string& token);

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    map<string, set<string>> reporterTable; //신고당한 사람 => 신고한 사람 집합
    map<string, set<string>> reportedTable; //신고한 사람 => key에게 신고당한 사람 집합

    for (const string& id : id_list) {
        reporterTable[id] = {};
        reportedTable[id] = {};
    }

    for (string rep : report) {
        vector<string> parsed = split(rep, " ");

        string reporter = parsed[0];
        string reported = parsed[1];

        reportedTable[reported].insert(reporter);
        reporterTable[reporter].insert(reported);
    }

    vector<int> answer;
    for (const string& id : id_list) {
        int notificationCnt = 0;
        for (const string& reported_user : reporterTable[id]) {
            if (reportedTable[reported_user].size() >= k) {
                notificationCnt++;
            }
        }
        answer.push_back(notificationCnt);
    }
    return answer;
}

vector<string> split(string& s, const string& token) {
    vector<string> stringList;
    int searchPoint = 0;
    while(true) {
        int searchResult = s.find(token, searchPoint);

        stringList.push_back(s.substr(searchPoint, searchResult - searchPoint));
        searchPoint = searchResult + 1;

        if (searchResult == string::npos) break;
    }

    return stringList;
}

