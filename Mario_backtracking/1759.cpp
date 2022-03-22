/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
int l, c;
vector<string> ans;
string temp;
vector<char> arr;

bool is_satisfy(string tmp) {
    //모음 1개 이상, 자음 2개 이상
    int vowel_cnt = 0, consonant_cnt = 0;
    for (auto &val : tmp) {
        if (val == 'a' || val == 'e' || val == 'i' || val == 'o' || val =='u') vowel_cnt++;
        else consonant_cnt++;
    }
    return (vowel_cnt >= 1 && consonant_cnt >= 2);
}

void dfs(int cur) {
    if (temp.size() == l) { //l 이상은 볼 필요가 없기 때문에 리턴시킨다.
        if (is_satisfy(temp))
            ans.push_back(temp);
        return;
    }
    if (cur == c) return;
    dfs(cur + 1);
    temp.push_back(arr[cur]);
    dfs(cur + 1);
    temp.pop_back();
}
int main() {
    cin >> l >> c;
    arr = vector<char>(c);
    for (int i = 0; i < c; i++) cin >> arr[i];
    sort(all(arr));
    dfs(0);
    sort(all(ans));
    for (auto &val : ans) cout << val << '\n';
}
*/
