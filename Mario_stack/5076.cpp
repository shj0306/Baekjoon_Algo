/*#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
    string html;
    while(getline(cin, html)) {
        if (html == "#") break;
        int pos = 0; bool isFin = true; stack<string> stk;
        while(html.find("<", pos) != string::npos) { //<가 없을 때까지 반복문 돌림
            //find tag
            int start_pos = (int)html.find("<", pos);
            int end_pos = (int)html.find(">", pos);
            string tag = html.substr(start_pos+1, end_pos - start_pos - 1);

            //공백으로 split해서 vector에 집어넣는다.
            vector<string> tag_v;
            char str_buff[255];
            strcpy(str_buff, tag.c_str());

            char *tok = strtok(str_buff, " ");

            while(tok != nullptr) {
                tag_v.emplace_back(tok);
                tok = strtok(nullptr, " ");
            }
            if (tag_v.back() == "/") {} // />는 그냥 통과
            else if (tag_v[0][0] == '/') { //close_tag
                if (!stk.empty() && stk.top() == tag_v[0].substr(1, tag_v[0].length())) {
                    stk.pop();
                }else {
                    isFin = false;
                    cout << "illegal" << '\n';
                    break;
                }
            }
            else stk.push(tag_v[0]);
            pos = end_pos+1; //다음 < 탐색
        }
        if (isFin) {
            if (!stk.empty()) cout << "illegal" << '\n';
            else cout << "legal" <<'\n';
        }
    }
    return 0;
}*/
/*
 * https://sooooooyn.tistory.com/26 참고
 *
 */