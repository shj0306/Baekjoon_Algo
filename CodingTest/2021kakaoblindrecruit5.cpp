/*
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
typedef pair<int, int> pii;

int transform_time(string time) { //초로 환산
    int sum = 0;
    if (time[0] == '0') sum += stoi(time.substr(1, 1)) * 3600;
    else sum += stoi(time.substr(0, 2)) * 3600;
    if (time[2] == '0') sum += stoi(time.substr(3, 1)) * 60;
    else sum += stoi(time.substr(2, 2)) * 60;
    if (time[4] == '0') sum += stoi(time.substr(5, 1));
    else sum += stoi(time.substr(4, 2));
    return sum;
}

string change_str(int h, int m, int s) {
    string ans;
    if (h >= 10) ans.append(to_string(h));
    else ans.append("0" + to_string(h));
    ans.push_back(':');
    if (m >= 10) ans.append(to_string(m));
    else ans.append("0" + to_string(m));
    ans.push_back(':');
    if (s >= 10) ans.append(to_string(s));
    else ans.append("0" + to_string(s));
    return ans;
}

string solution(string play_time, string adv_time, vector<string> logs) {
    string answer = "";
    vector<int> start_time; //재생 시작 구간
    vector<int> end_time; //재생 종료 구간

    string total_time, ad_time;
    for (char i: play_time) {
        if (i != ':') total_time.push_back(i);
    }

    for (char i: adv_time) {
        if (i != ':') ad_time.push_back(i);
    }

    int adv_length = transform_time(ad_time); //광고 길이
    int total_length = transform_time(total_time); //총 영상 길이
    vector<int> total_vod(total_length+1, 0); //각 시간 별 재생 구간 개수

    for (auto &log: logs) {
        string time[2]; //start,end
        int idx = 0;
        for (char j: log) {
            if (j == '-') idx++;
            else if (j != ':') time[idx].push_back(j);
        }
        int start = transform_time(time[0]);
        int end = transform_time(time[1]);
        start_time.push_back(start);
        end_time.push_back(end);
    }

    for (int i = 0; i < start_time.size(); i++) {
        total_vod[start_time[i]]++;
        total_vod[end_time[i]]--;
    }

    for (int i = 1; i <= total_length; i++) total_vod[i] += total_vod[i - 1];
    for (int i = 1; i <= total_length; i++) total_vod[i] += total_vod[i - 1];

    long max_time = total_vod[adv_length-1];
    long maxStartTime = 0;
    for (int i = 0; i + adv_length <= total_length; i++) {
        long tmp = total_vod[i + adv_length] - total_vod[i];
        if (tmp > max_time) {
            max_time = tmp;
            maxStartTime = i + 1;
        }
    }

    int hour, minute, sec;

    hour = maxStartTime / 3600;
    maxStartTime -= 3600 * hour;
    minute = maxStartTime / 60;
    maxStartTime -= 60 * minute;
    sec = maxStartTime % 60;

    answer = change_str(hour, minute, sec);

    return answer;
}
*/
