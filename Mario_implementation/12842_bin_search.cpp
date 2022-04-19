/*
#include <iostream>
#include <string>
#include <vector>
#include <queue>

#define ll long long
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int, int> >
#define vll vector<ll>

#define MOD 86400
#define INF 0x7fffffff
#define MAX_SIZE (int)1e5

using namespace std;
//ios::sync_with_stdio(false); cin.tie(0);

int t[(int)1e5];

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n, tmp;
    cin >> n >> tmp;
    n -= tmp;

    int k;
    cin >> k;

    for (int i = 0; i < k; i++) {
        cin >> t[i];
    }

    int left = 0, right = 1e5;

    while (left <= right) {
        int mid = (left + right) / 2;
        int eat = 0;

        for (int i = 0; i < k; i++) {
            eat += mid / t[i] + 1;
        }

        if (eat >= n) right = mid - 1;
        else left = mid + 1;
    }

    //left시간
    vi ret;
    int sum = 0;
    int v = 1e3; // 가장 근접한 나머지 값

    for (int i = 0; i < k; i++) {
        int rest = left % t[i];
        sum += left / t[i] + 1;

        if (rest < v) {
            ret.clear();
            ret.push_back(i + 1);
            v = rest;
        }
        else if (rest == v) ret.push_back(i + 1);
    }

    sum -= n; // left초 동안 먹은 빵의 양에서 우리가 구하고자 하는 빵의 양을 뺌

    cout << ret[ret.size() - 1 - sum]; // 백터의 끝에서 sum을 빼주면 답을 얻을 수 있음.

    return 0;
}

*/
