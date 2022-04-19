/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int N, M;
    cin>>N>>M;
    vector<int> A(N);
    map<int, int> B, C;
    for(int i=0; i<N; i++) {
        cin>>A[i];
        ++B[A[i]];
        if(!C.count(A[i])) C[A[i]]=i;
    }
    sort(begin(A), end(A), [&](auto &x, auto &y) {
        return B[x]>B[y] || B[x]==B[y] && C[x]<C[y];
    });
    for(int x:A) cout<<x<<' ';
}*/
