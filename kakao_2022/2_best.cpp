#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int conv(string &t) {
    int h = (t[0] - '0') * 10 + t[1] - '0';
    int m = (t[3] - '0') * 10 + t[4] - '0';
    return h * 60 + m;
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> car[10000];
    for (auto& record : records) {
        stringstream ss(record);
        string time, car_num, state;
        ss >> time >> car_num >> state;
        car[stoi(car_num)].push_back(conv(time));
    }

    vector<int> answer;
    for (int i = 0; i < 10000; i++) {
        if (!car[i].empty()) {
            //해당 차의 기록이 홀수 개라면
            if (car[i].size() & 1) car[i].push_back(23 * 60 + 59);
            int sum = 0;
            for (int j = 1; j < car[i].size(); j += 2) sum += car[i][j] - car[i][j-1];

            int total_fee = fees[1];
            int basic_time = fees[0];
            if (sum > basic_time) total_fee += (sum - basic_time + fees[2] - 1) / fees[2] * fees[3];

            answer.push_back(total_fee);
        }
    }
    return answer;
}

int main() {
    vector<int> answer = solution({180, 5000, 10, 600},
                                  {"05:34 5961 IN", "06:00 0000 IN", "06:34 0000 OUT", "07:59 5961 OUT",
                                   "07:59 0148 IN",
                                   "18:59 0000 IN", "19:09 0148 OUT", "22:59 5961 IN", "23:00 5961 OUT"});

    for (auto val: answer) cout << val << ' ';
}
