/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
    if (a.second > b.second) return true;
    else if (a.second == b.second) return a.first < b.first;
    else return false;
}

int main() {
    int n, answer = 0;
    cin >> n;
    vector<pair<int,int>> hw(n);
    for (int i = 0; i < n; i++) cin >> hw[i].first >> hw[i].second;

    sort(begin(hw), end(hw), cmp);

    map<int,int> date;

    for (auto & h : hw) {
        for (int j = h.first; j >= 1; j--) {
            if (!date[j]) {
                date[j]=1;
                answer += h.second;
                break;
            }
        }
    }
    cout << answer << '\n';
}*/
//hint
/*
 * 점수가 큰 것부터 보면서 n개의 날짜 중 이 과제를 처리
 * 할 수 있는 가장 늦은 날로 선정
 * */

