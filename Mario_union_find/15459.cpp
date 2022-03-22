/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 100001;
long long N, M;
vector<pair<int,int>> taste;

int main() {
    fast_io;
    cin >> N >> M;
    taste = vector<pair<int,int>>(N);

    for (int i = 0; i < N; i++)
        cin >> taste[i].first >> taste[i].second;

    long long val = 0;
    int start = 0, end = 0;
    int result = 1e9;
    map<int,int> s_check;

    while(true) {
        if (val < M) {
            if (end == N) break;

            if (s_check.count(taste[end].second) == 0)
                s_check[taste[end].second] = 1;
            else s_check[taste[end].second]++;

            val += taste[end].first;
            end++;
        }else {
            auto it = s_check.end();
            it--;
            result = min(result, (*it).first);
            s_check[taste[start].second]--;

            if (s_check[taste[start].second] == 0)
                s_check.erase(taste[start].second);

            val -= taste[start].first;
            start++;
        }
    }
    cout << result << '\n';
    return 0;
}
//https://geniusjo-story.tistory.com/488?category=912499*/
