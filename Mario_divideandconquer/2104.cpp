/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> v;
ll reculsive_func(int s, int e) {
    if (s == e) return (ll)v[s] * v[s];
    int mid = (s+e) / 2;
    ll res = max(reculsive_func(s,mid), reculsive_func(mid+1,e)); //양 쪽 구간의 최댓값
    ll val = v[mid], l = mid, r = mid, min_val = v[mid];
    while(r-l < e-s) {
        int p = l > s ? v[l-1] : -1;
        int q = r < e ? v[r+1] : -1;
        if (p >= q) {
            val += p;
            if (min_val > p) min_val = p;
            l--;
        }else {
            val += q;
            if (min_val > q) min_val = q;
            r++;
        }
        res = max(res, val * min_val); //최댓값 갱신
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    v =vector<int>(n+1);
    for (int i = 1; i <= n; i++) cin >> v[i];

    cout << reculsive_func(1, n) << '\n';
}*/
