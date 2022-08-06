#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, cnt, res;
bool is_impossible;
queue<int> q1, q2;

void solve(ll sum1, ll sum2, int flag) {
    //2°¡ ´õ Å­
    if (cnt == N) {
        is_impossible=true;
        return;
    }
    //sum1 < sum2
    if (!flag) {
        int val = q2.front();
        q2.pop();
        q1.push(val);
        sum1 += val;
        sum2 -= val;
        res++;
        if (sum1 > sum2) {
            cnt++;
            solve(sum1, sum2, 1);
        }
        else if (sum1 < sum2) solve(sum1, sum2, 0);
        else return;
    }else { //sum1 > sum2
        int val = q1.front();
        q1.pop();
        q2.push(val);
        sum2 += val;
        sum1 -= val;
        res++;
        if (sum1 > sum2) solve(sum1, sum2, 1);
        else if (sum1 < sum2) {
            cnt++;
            solve(sum1, sum2, 0);
        }
        else return;
    }
}

int solution(vector<int> queue1, vector<int> queue2) {
    ll sum1 = 0, sum2 = 0;
    N = queue1.size() + queue2.size();
    for (int i = 0; i < queue1.size(); i++) {
        sum1 += queue1[i];
        q1.push(queue1[i]);
    }
    for (int i = 0; i < queue2.size(); i++) {
        sum2 += queue2[i];
        q2.push(queue2[i]);
    }

    if ((sum1 + sum2) % 2) return -1;

    if (sum1 < sum2) {
        solve(sum1, sum2, 0);
    }else if (sum1 > sum2) {
        solve(sum1, sum2, 1);
    }

    if (is_impossible) res = -1;
    return res;
}

int main() {
    fast_io;
    cout << solution({3,2,7,1}, {4,6,5,0});
}

/*
 * 28 / 2 = 14
 *
 * (2 7 1 4) 6 5 0 3
 * 1 1 1 1 2 2 2 2
 */