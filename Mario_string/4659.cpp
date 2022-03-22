//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second
//using namespace std;
//
//int main() {
//    fast_io;
//    string word;
//    set<char> vowels;
//    vowels.insert('a'); vowels.insert('e');
//    vowels.insert('i'); vowels.insert('o');
//    vowels.insert('u');
//
//    while(true) {
//        cin >> word;
//        if (word == "end") break;
//        bool is_accept = true; //적합성 여부
//        bool is_vowel = false; //모음 존재 여부
//        int vowel_cnt = 0, cons_cnt = 0;
//        if (vowels.find(word[0]) != vowels.end()) {
//            vowel_cnt++;
//            is_vowel = true;
//        }else cons_cnt++;
//        char prev = word[0]; //이전 단어
//        for (int i = 1; i < word.length(); i++) {
//            if (vowels.find(word[i]) != vowels.end()) {
//                is_vowel = true;
//                if (vowels.find(prev) != vowels.end()) {
//                    vowel_cnt++;
//                }else {
//                    vowel_cnt = 1;
//                    cons_cnt = 0;
//                }
//            }else {
//                if (vowels.find(prev) == vowels.end()) {
//                    cons_cnt++;
//                }else {
//                    cons_cnt = 1;
//                    vowel_cnt = 0;
//                }
//            }
//            if ((prev != 'e' && prev != 'o' && prev == word[i]) || vowel_cnt >= 3 || cons_cnt >= 3) {
//                is_accept = false;
//                break;
//            }
//            prev = word[i];
//        }
//
//        if (!is_vowel) is_accept = false;
//        is_accept ? cout << '<' << word << '>' << " is acceptable." << '\n' :
//                    cout << '<' << word << '>' << " is not acceptable." << '\n';
//    }
//}
///*
// * 모음(a,e,i,o,u) 하나를 반드시 포함하여야 한다. is_vowel 모음 존재 여부
// * 모음이 3개 혹은 자음이 3개 연속으로 오면 안 된다. vowel_cnt, cons_cnt
// * 같은 글자가 연속적으로 두번 오면 안되나, ee 와 oo는 허용한다. prev
// */