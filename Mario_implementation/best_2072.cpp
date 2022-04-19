/*
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, a[30][30], dx[8] = {0, 0, 1, -1, 1, -1, 1, -1}, dy[8] = {1, -1, 0, 0, -1, 1, 1, -1};

int dfs(int x, int y, int d){
    return 1 + (a[x+dx[d]][y+dy[d]] == a[x][y] ? dfs(x+dx[d], y+dy[d], d) : 0);
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for(int i=1;i<=n;i++){
        int x, y; cin >> x >> y;
        a[x][y] = (i % 2 ? 1 : -1);

        for(int j=0;j<=6;j+=2)
            if(dfs(x, y, j) + dfs(x, y, j+1) == 6)
                return cout << i, 0;
    }
    cout << -1;
}*/
