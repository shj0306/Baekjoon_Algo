/*
#include <bits/stdc++.h>
using namespace std;
int n;
double p_e, p_w, p_s, p_n, simple_prob;
bool visited[31][31];

void back_tracking(int r, int c, int depth, double prob) {
    if (depth == n) {
        simple_prob += prob;
        return;
    }
    //east
    if (!visited[r][c+1]) {
        visited[r][c+1] = true;
        back_tracking(r, c+1, depth+1, prob * p_e);
        visited[r][c+1] = false;
    }
    //west
    if (!visited[r][c-1]) {
        visited[r][c-1] = true;
        back_tracking(r, c-1, depth+1, prob * p_w);
        visited[r][c-1] = false;
    }
    //south
    if (!visited[r+1][c]) {
        visited[r+1][c] = true;
        back_tracking(r+1, c, depth+1, prob * p_s);
        visited[r+1][c] = false;
    }
    //north
    if (!visited[r-1][c]) {
        visited[r-1][c] = true;
        back_tracking(r-1, c, depth+1, prob * p_n);
        visited[r-1][c] = false;
    }
}
int main() {
    double e,w,s,nor;
    cin >> n >> e >> w >> s >> nor;
    p_e = e / 100; p_w = w / 100;
    p_s = s / 100; p_n = nor / 100;

    memset(visited, false, sizeof(visited));
    visited[15][15] = true;
    back_tracking(15,15,0,1.0);
    printf("%.9f\n", simple_prob);
    return 0;
}
*/
