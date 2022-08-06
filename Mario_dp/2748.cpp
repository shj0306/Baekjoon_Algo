#include <bits/stdc++.h>
using namespace std; int N; long long D[91] = {0,1,};
int main() {cin>>N;for(int i=2;i<=N;i++)D[i]=D[i-1]+D[i-2];cout<<D[N];}