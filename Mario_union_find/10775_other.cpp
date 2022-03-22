/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef pair<int, int> pii;

struct compare{
    bool operator()(pii a, pii b){
        return a.second > b.second;
    }
};

int main(){
    fast_io;

    int G, P;
    cin >> G >> P;

    vector<pii> plane = vector<pii>(P);
    for(int i = 0; i < P; i ++){
        plane[i].second = i;
        cin >> plane[i].first;
    }
    sort(all(plane), greater<>());
    priority_queue<pii, vector<pii>, compare> pq;
    vector<pii> v;

    int cursor = 0;
    for(int i = G; i >= 1; i--){
        while(cursor < P && i <= plane[cursor].first){
            pq.push(plane[cursor]);
            cursor++;
        }
        if(pq.empty()) continue;
        v.push_back(pq.top());
        pq.pop();
    }
    int huddle = 100001;
    while(!pq.empty()){
        if(huddle > pq.top().second) huddle = pq.top().second;
        pq.pop();
    }
    int ans = 0;
    for(auto & i : v){
        if(i.second < huddle) ans ++;
    }
    cout << ans;
    return 0;
}*/
