/*
#include<bits/stdc++.h>
using namespace std;
bitset< 1<<20 >ch;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    vector<bitset<20> >T(N);
    for(;M--;)
    {
        int A,B,C;
        cin>>A>>B;--B;
        if(A==1) cin>>C,--C,T[B].set(C);
        else if(A==2) cin>>C,--C,T[B].reset(C);
        else if(A==3) T[B]<<=1;
        else T[B]>>=1;
    }
    int to=0;
    for(auto&I:T)if(!ch.test(I.to_ulong()))++to,ch.set(I.to_ulong());
    cout<<to;
}*/
