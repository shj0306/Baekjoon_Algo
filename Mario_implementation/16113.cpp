/*
#include <bits/stdc++.h>

using namespace std;

struct DIGIT {
    int first;
    int second;
    int third;
    bool is_two = false; //2와 5를 구분
};

int find_number(DIGIT &digit);

int main() {
    int n;
    string encoded;
    cin >> n;
    cin >> encoded;
    int div = n / 5;
    int idx = 0;
    int decoded[5][20000];
    for (int i = 0; i < n; i++) {
        if (i)
            if (i % div == 0) idx++;
        if (encoded[i] == '#') decoded[idx][i % div] = 1;
        else decoded[idx][i % div] = 0;
    }
    vector<int> b_num;
    int ii = 0;
    vector<DIGIT> black;
    vector<int> ans;

    bool is_two = false;
    
    for (int i = 0; i < div; i++) {
        int num = 0;
        for (int j = 0; j < 5; j++) {
            if (decoded[j][i] == 1)
                num++;
            else if (b_num.empty() && j == 1) is_two = true; //1열의 2행이 공백이라면
        }
        if (num == 0) { //공백
            if (b_num.size() == 1) {
                black.push_back({b_num[0], 0, 0, is_two});
            } else if (b_num.size() == 3) {
                black.push_back({b_num[0], b_num[1], b_num[2], is_two});
            }
            b_num.clear();
            is_two = false;
        } else b_num.push_back(num);
    }
    if (!b_num.empty()) { //미처 처리 못한 숫자가 있다면
        if (b_num.size() == 1) {
            black.push_back({b_num[0], 0, 0});
        } else if (b_num.size() == 3) {
            black.push_back({b_num[0], b_num[1], b_num[2]});
        }
        b_num.clear();
    }
    for (auto &val : black) {
        int num = find_number(val);
        ans.push_back(num);
    }
    for (auto &val : ans) cout << val;
}

int find_number(DIGIT &digit) {
    if (digit.first == 5 && digit.second == 2 && digit.third == 5)
        return 0;
    if (digit.first == 5 && digit.second == 0 && digit.third == 0)
        return 1;
    if (digit.first == 4 && digit.second == 3 && digit.third == 4) {
        if (digit.is_two) return 2;
        else return 5;
    }
    if (digit.first == 3 && digit.second == 3 && digit.third == 5)
        return 3;
    if (digit.first == 3 && digit.second == 1 && digit.third == 5)
        return 4;
    if (digit.first == 5 && digit.second == 3 && digit.third == 4)
        return 6;
    if (digit.first == 1 && digit.second == 1 && digit.third == 5)
        return 7;
    if (digit.first == 5 && digit.second == 3 && digit.third == 5)
        return 8;
    if (digit.first == 4 && digit.second == 3 && digit.third == 5)
        return 9;
    return -1;
}*/