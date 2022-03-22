/*
#include <bits/stdc++.h>

using namespace std;
bool num[10]; //0~9까지 숫자 사용 여부
bool checked[26] = {false,};
char alphabet[26]; //해당 알파벳이 이미 사용되었는 지
int n, max_len, max_val;
vector<char> temp;
vector<int> v;
vector<string> word;

bool cmp(const string &str1, const string &str2) {
    return str1.length() > str2.length();
}

void calc() {
    int result = 0;
    int cnt = 0;
    int a[26];
    for (int i = 0; i < temp.size(); i++) {
        char c = temp[i];
        int num = v[i];
        a[c-'A'] = num;
    }
    for (int i = 0; i < word.size(); i++) {
        int tmp = 0;
        for (int j = 0; j < word[i].length(); j++) {
            tmp *= 10;
            tmp += a[word[i][j]-'A'];
        }
        result += tmp;
    }
    max_val = max(max_val, result);
}

void back_tracking(int degree) {
    if (degree == 10) {
        calc();
        return;
    }
    for (int i = 10 - temp.size(); i <= 9; i++) {
        if (!num[i]) {
            v.push_back(i);
            num[i] = true;
            back_tracking(degree+1);
            num[i] = false;
            v.pop_back();
        }
    }
}

int main() {
    cin >> n;
    word = vector<string>(n);
    memset(alphabet, 0, sizeof(alphabet));
    memset(num, 0, sizeof(num));
    for (int i = 0; i < n; i++) {
        cin >> word[i];
        for (auto &c : word[i]) {
            if (!checked[c-'A']) {
                checked[c-'A'] = true;
                temp.push_back(c);
            }
        }
    }
    back_tracking(10-temp.size());
    cout << max_val << '\n';
    return 0;
}*/
