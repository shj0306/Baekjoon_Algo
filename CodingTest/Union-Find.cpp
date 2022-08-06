/*
#include <bits/stdc++.h>
using namespace std;
unordered_map<long long, long long> tmp;//{노드 번호, 부모 노드}
long long getRoot(long long x) { ///인수로 넘긴 정점의 루트를 알려준다.
    */
/*if (tmp[x] == 0) {
        tmp[x] = x;
        return x;
    }
    else if (tmp[x] == x) return x;
    else return tmp[x] = getRoot(tmp[x]);
     *//*

    return ((!tmp[x] || tmp[x] == x) ? tmp[x] = x : tmp[x] = getRoot(tmp[x]));
}
*/
/*void uniontmp(long long a, long long b) { //두 정점을 병합함, 부모가 같은 그룹으로
    a = getRoot(a); b = getRoot(b);
    if (a < b) tmp[a] = b;
    else tmp[b] = a;
}*//*

vector<long long> solution(long long k, vector<long long> room_number) {
    vector<long long> answer;
    for (auto node : room_number) {
        node = getRoot(node);
        answer.push_back(node);
        //uniontmp(temp,temp+1);
        tmp[node] = tmp[node] + 1LL;
    }
    return answer;
}
*/
