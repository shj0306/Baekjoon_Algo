/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    string word;
    map<char,int> m;
    cin >> word;
    for (char & i : word) if (m[i] == 0) m[i]++;
    for (char a = 'a'; a <= 'z';) {
        if (m[a]) {a++;}
        else {
            word.push_back(a);
            cout << word << '\n';
            return 0;
        }
    }
    string bef_word = word;

    for (int i = word.size() - 1; i >= 1; i--) {
        if (word[i] > word[i-1]) {
            char temp = 'z';
            for (int j = i; j < word.size(); j++)
                if (word[i-1] < word[j] && word[j] < temp) temp = word[j];
            swap(word[i-1], temp);
            word.erase(word.begin()+i, word.end());
            break;
        }
    }

    if (bef_word == word) cout << -1 <<'\n';
    else cout << word <<'\n';
}
*/
