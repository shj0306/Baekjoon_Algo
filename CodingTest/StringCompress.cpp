/*
#include <string>
#include <vector>
#include <iostream>
using namespace std;
int solution(string s) {
    int answer = s.size();
    for (int i = 0; i <= s.size() / 2; i++) {
        int cnt = 1; //중복된 수의 개수
        int val = 0; //(i+1)개 단위로 나눴을 때 나오는 개수
        string temp = s.substr(0,i+1);
        for (int j = i+1; j < s.size(); j+=i+1) {
            if (j + i + 1 > s.size()) { //현재 남은 개수가 쪼개는 단위수보다 적을 때
                if (cnt == 1) { //이전에 중복된게 없는 경우
                    val += (s.size() - j) + (i + 1);
                }else { //중복된게 있는 경우(ex: edede)
                    string str = to_string(cnt);
                    val += (s.size() - j) + str.size() + (i + 1);
                }
                cnt = 0;
                break;
            }
            if (temp == s.substr(j,i+1)) {//중복된다면
                cnt++;
            }else if (cnt > 1){
                string str = to_string(cnt);
                val += str.size() + (i+1);
                temp = s.substr(j, i+1);
                cnt = 1;
            }else {
                val += (i+1);
                temp = s.substr(j, i+1);
            }
        }
        if (cnt) {
            if (cnt == 1) val += (i+1);
            else {
                string str = to_string(cnt);
                val += str.size() + (i+1);
            }
        }
        answer = min(answer, val);
    }
    return answer;
}
int main() {
    string s;
    cin >> s;
    cout << solution(s) <<'\n';
}
*/
