/*
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> paper;
vector<int> num(3,0);//{-1,0,1}
int check(int lr, int lc, int rr, int rc) {
    int tmp = paper[lr][lc];
    if (lr == rr && lc == rc) return 1;
    for (int i = lr; i <= rr; i++) {
        for (int j = lc; j <= rc; j++) {
            if (tmp != paper[i][j]) return 0;
        }
    }
    return 1;
}
void cut_paper(int lr, int lc, int rr, int rc) {
    //check() : 종이 안에 같은 숫자만 적혀 있는 지
    //아니면 9등분함.
    if(check(lr,lc,rr,rc)) {
        switch (paper[lr][lc]) {
            case -1:
                num[0]++;
                break;
            case 0:
                num[1]++;
                break;
            case 1:
                num[2]++;
                break;
        }
    }else {
        int d = rr - lr + 1;
        cut_paper(lr,lc,rr - (2*d)/3,rc - (2*d)/3);
        cut_paper(lr,lc+d/3,rr - (2*d)/3,rc - d/3);
        cut_paper(lr,lc+(2*d)/3, rr - (2*d)/3, rc);

        cut_paper(lr+d/3,lc,rr - d/3,rc - (2*d)/3);
        cut_paper(lr+d/3,lc+d/3,rr - d/3,rc - d/3);
        cut_paper(lr+d/3,lc+(2*d)/3, rr - d/3, rc);

        cut_paper(lr+(2*d)/3,lc,rr,rc - (2*d)/3);
        cut_paper(lr+(2*d)/3,lc+d/3,rr,rc - d/3);
        cut_paper(lr+(2*d)/3,lc+(2*d)/3, rr, rc);
    }
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    paper = vector<vector<int>>(n+1, vector<int>(n+1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> paper[i][j];
        }
    }
    cut_paper(1,1,n,n);
    for (auto &val : num) cout << val << '\n';
}
*/