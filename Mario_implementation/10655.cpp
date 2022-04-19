/*
#include <bits/stdc++.h>
using namespace std;
struct point {
    int x;
    int y;
};
typedef vector<point> vp;
int main() {
    int n;
    cin >> n;
    vp cp(n+1);

    for (int i = 1; i <= n; i++) {
        cin >> cp[i].x >> cp[i].y;
    }
    int min_dist = 0;
    for (int i = 1; i < n; i++)
        min_dist += abs(cp[i].x - cp[i+1].x) + abs(cp[i].y - cp[i+1].y);

    int copy_dist = min_dist;
    int idx = 2;
    while (idx != n) {
        int dist = copy_dist;
        int org_dist = abs(cp[idx-1].x - cp[idx].x)
                + abs(cp[idx-1].y - cp[idx].y)
                + abs(cp[idx].x - cp[idx+1].x)
                + abs(cp[idx].y - cp[idx+1].y);
        int cur_dist = abs(cp[idx-1].x - cp[idx+1].x)
                + abs(cp[idx-1].y - cp[idx+1].y);
        dist -= (org_dist - cur_dist);
        if (min_dist > dist) min_dist = dist;
        idx++;
    }
    cout << min_dist <<'\n';
}*/
