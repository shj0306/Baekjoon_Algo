/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fast_io;
    map<string, int> memory;
    string tree; int n = 0;
    while(true) {
        if (getline(cin, tree).eof()) break;
        if (memory.count(tree) == 0) memory[tree] = 1;
        else memory[tree]++;
        n++; //총 개체수
    }
    for (auto & it : memory) {
        printf("%s %.4f\n", it.first.c_str(), 100.0 * it.second / n);
    }
}*/
