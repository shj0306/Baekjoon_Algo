/*
#include <iostream>
#include <string>
#include <cmath>
#include <map>

using namespace std;

int t;

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        string word; string type_word;
        cin >> word >> type_word;
        map<char, int> m;
        for (int j = 0; j < 26; j++) {
            m.insert(make_pair(word[j], j));
        }
        if (type_word.size() == 1) {
            cout << 0 <<endl;
        }else {
            int sum = 0;
            for (int j = 0; j < type_word.size() - 1; j++) {
                auto it = m.find(type_word[j]);
                auto nit = m.find(type_word[j+1]);
                sum += abs(it->second - nit->second);
            }
            cout << sum <<endl;
        }
    }
    return 0;
}
*/
