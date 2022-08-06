/*
#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;
vector<string> solution(vector<string> record) {
    vector<string> answer,temp,id;
    map<string, string> user;
    for (auto s : record) {
        stringstream  ss(s);
        ss.str(s);
        string word;
        bool is_func = false;
        while(ss >> word) {
            temp.push_back(word);
            if (is_func) {
                id.push_back(word);
                is_func = false;
            }
            if (word == "Enter" || word == "Leave") is_func = true;
        }
    }
    for (int i = 0; i < temp.size(); i++) {
        if (temp[i] == "Enter") {
            user[temp[i+1]] = temp[i+2];
            answer.emplace_back("님이 들어왔습니다.");
        }else if (temp[i] == "Change") {
            user[temp[i+1]] = temp[i+2];
        }else if (temp[i] == "Leave") {
            answer.emplace_back("님이 나갔습니다.");
        }
    }

    for (int i = 0; i < answer.size(); i++) {
        string name = user[id[i]];
        answer[i] = name + answer[i];
    }

    return answer;
}
*/
