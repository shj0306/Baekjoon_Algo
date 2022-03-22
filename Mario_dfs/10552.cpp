/*
#include <bits/stdc++.h>
using namespace std;

int n,m,p;
int cnt;
int arr[100001];
int check[100001];

void dfs(int now)
{
    now = arr[now];
    if(now == 0) //해당 채널을 싫어 하는 사람이 없다면
    {
        cout << cnt << "\n";
        return;
    }
    if(check[now] == 1) //이미 방문한 곳이면, 싸이클
    {
        cout << -1 << "\n";
        return;
    }
    cnt++;
    check[now] = 1;
    dfs(now);
}

int main(void)
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m >> p;
    int love, hate;
    for (int i = 0; i < n; i++)
    {
        cin >> love >> hate;
        if (arr[hate] == 0)
            arr[hate] = love;
    }
    dfs(p);
}*/
