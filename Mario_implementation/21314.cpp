/*
#include <bits/stdc++.h>
using namespace std;
string solve1(string mkn);
string solve2(string mkn);

int main() {
    string mkn, temp;
    cin >> mkn;

    cout << solve1(mkn) << '\n';
    cout << solve2(mkn) << '\n';
}

string solve1(string mkn) {
    int m = 0;
    for (int i = 0; i < mkn.size(); i++) {
        if (mkn[i] == 'M') {
            m++;
        }else { //k
            if (m) {
                string temp;
                for (int j = 1; j <= m+1; j++) {
                    if (j==1) {
                        temp.push_back('5');
                    }else temp.push_back('0');
                }
                mkn.replace(i-m,temp.size(),temp);
                m = 0;
            }else mkn[i] = '5';
        }
    }

    if (m) {
        string temp;
        for (int i = 1; i <= m; i++) temp.push_back('1');
        mkn.replace(mkn.size()-m,m,temp);
    }
    return mkn;
}

string solve2(string mkn) {
    int m = 0;
    for (int i = 0; i < mkn.size(); i++) {
        if (mkn[i] == 'M') {
            m++;
        }else { //k
            if (m > 1) {
                for (int j = i - m; j < i; j++) {
                    if (j == i-m) mkn[j] = '1';
                    else mkn[j] = '0';
                }
                mkn[i] = '5';
            }else if (m==1) {
                mkn[i-1] = '1'; mkn[i] = '5';
            }
            else mkn[i] = '5';
            m = 0;
        }
    }
    if (m > 1) {
        string temp;
        for (int i = 1; i <= m; i++) {
            if (i == 1) temp.push_back('1');
            else temp.push_back('0');
        }
        mkn.replace(mkn.size()-m,m,temp);
    }else if (m == 1) mkn[mkn.size()-1] = '1';
    return mkn;
}*/
