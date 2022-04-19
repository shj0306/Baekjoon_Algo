/*
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <vector>
#include <functional>
#define NM 100005
#define MOD 1000000007
#define INF 0x7fffffff
#define FOR(i,n,m) for (int i=(n);i<=(m);i++)
#define si(n) fscanf(in,"%d",&n)
typedef long long int ll;
//FILE *in=fopen("input.txt","r"), *out=fopen("output.txt","w");
FILE *in = stdin, *out = stdout;
#pragma comment (linker, "/STACK:36777216") //stack size 설정
using namespace std;

struct TREE {
    ll x, cnt;
}tree[NM * 2];

ll n, a[NM], B;

void input() {
    si(n); B = n - 1;
    FOR(i, 1, n) {
        fscanf(in, "%lld", &a[i]);
        tree[B + i].x = a[i];
        tree[B + i].cnt = 1;
    }
}
void pro() {
    for (int i = B; i >= 1; i--) {
        int L = i * 2, R = L + 1;
        if (tree[L].x == tree[R].x) {
            tree[i].x = tree[L].x;
            tree[i].cnt = tree[L].cnt + tree[R].cnt;
        }
        else if (tree[L].cnt > tree[R].cnt) {
            tree[i].cnt = tree[L].cnt - tree[R].cnt;
            tree[i].x = tree[L].x;
        }
        else {
            tree[i].cnt = tree[R].cnt - tree[L].cnt;
            tree[i].x = tree[R].x;
        }
    }
    int cnt = 0;
    FOR(i, 1, n) if (a[i] == tree[1].x) cnt++;
    if (cnt > n / 2) {
        fprintf(out, "%lld\n", tree[1].x);
    }
    else {
        fprintf(out, "SYJKGW\n");
    }
}
int main() {
    int TT; si(TT);
    FOR(tt, 1, TT) {
        input();
        pro();
    }
    return 0;
}
*/
