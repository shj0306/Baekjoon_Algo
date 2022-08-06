#include <bits/stdc++.h>
using namespace std;
unordered_map<long long ,long long> par;

long long find(long long p){
    return (!par[p] || par[p] == p ? par[p] = p : par[p] = find(par[p]));
}

vector<long long> solution(long long k, vector<long long> room_number) {
    vector<long long> answer;
    for(auto it: room_number){
        it = find(it);
        answer.push_back(it);
        par[it] = par[it] + 1LL;
    }
    return answer;
}
