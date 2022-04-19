/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin.tie(0)->sync_with_stdio(0);
    cin >> t;
    string cmd, arr; deque<int> q;
    while (t--) {
        cin >> cmd >> n >> arr;
        int r_cnt = 0; bool isFin = true;
        if (cmd.find('D', 0) != string::npos && n == 0) {
            cout << "error" << '\n';
            continue;
        } else if (n == 0) {
            cout << "[]" << '\n';
            continue;
        }
        int start_pos = (int) arr.find("[", 0);
        int end_pos = (int) arr.find("]", 0);
        string str1 = arr.substr(start_pos + 1, end_pos - start_pos - 1);
        stringstream ss(str1); string str;
        while(getline(ss, str, ',')) {
            q.push_back(stoi(str));
        }
        for (auto &val: cmd) {
            if (val == 'R') r_cnt = (r_cnt == 0) ? 1 : 0;
            if (val == 'D') {
                if (q.empty()) {
                    cout << "error" << '\n';
                    isFin = false;
                    break;
                } else if (r_cnt) q.pop_back();
                else q.pop_front();
            }
        }
        if (isFin) {
            if (r_cnt) {
                deque<int> tmp;
                while (!q.empty()) {
                    tmp.push_back(q.back());
                    q.pop_back();
                }
                q = tmp;
            }
            cout << "[";
            while (!q.empty()) {
                if (q.size() == 1) cout << q.front();
                else cout << q.front() << ",";
                q.pop_front();
            }
            cout << "]\n";
        }
    }
}
*/
/* R : reverse
 * D : pop 배열 size 0일때 사용하면 error
 *
 * RDR
 * R_cnt 1이면 D가 나올때 맨뒤 삭제
 * R_cnt 0이면 D가 나올때 맨 앞 삭제
 *//*

