/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
    int l, p, v, answer = 0;
    int num = 1;
    while(cin >> l >> p >> v) {
        if (l == 0 && p == 0 && v == 0) break;
        int temp = v / p;
        answer = l * temp;
        temp = v % p;
        if (temp <= l) answer += temp;
        else answer += l;
        printf("Case %d: %d\n", num, answer);
        num++;
    }
}*/
