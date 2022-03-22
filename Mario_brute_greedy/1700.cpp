/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; // n : 멀티탭 구멍의 개수, k : 전기용품 총 사용 횟수
    int answer = 0, use_cnt = 0; //현재 사용 중인 멀티탭 구멍 개수
    cin >> n >> k;
    map<int,int> multitab;
    vector<int> applies(k);
    for (int i = 0; i < k; i++) cin >> applies[i];

    for (int i = 0; i < k-1; i++) {
        if (!multitab[applies[i]] && use_cnt < n) { //멀티탭에 꽂혀있지 않고, 여유 공간이 있는 경우
            use_cnt++; multitab[applies[i]]=1;
        }else if (!multitab[applies[i]] && use_cnt == n) {//여유 공간이 없는 경우
            int max_idx = i; int min_appli;
            for (auto it = multitab.begin(); it != multitab.end(); it++) {
                if (it->second == 0) continue;
                int appli = it->first; int idx = k;
                for (int j = i+1; j < k; j++) {
                    if (appli == applies[j]) {
                        idx = j; break;
                    }
                }
                if (max_idx < idx) { //가장 늦게 사용 되는 전기 용품을 뺀다.
                    max_idx = idx;
                    min_appli = appli;
                }
            }
            multitab[min_appli] = 0;
            multitab[applies[i]] = 1;
            answer++;
        }
    }
    if (!multitab[applies[k-1]] && use_cnt == n) answer++;
    cout << answer << '\n';
}*/
