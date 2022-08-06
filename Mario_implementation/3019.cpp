//#include <bits/stdc++.h>
//using namespace std;
//string tetris[7][4] = {{"0", "0000", "0", "0000"},
//                       {"00","00","00","00"},
//                       {"001", "10", "001","10"},
//                       {"100", "01", "100","01"},
//                       {"000","10","101","01"},
//                       {"000","20","011","00"},
//                       {"000", "00", "110", "02"}}; //0, 90, 180, 270
//
//int main() {
//    int c, p;
//    cin >> c >> p;
//    map<string, int> m;
//    vector<string> col(c);
//    for (int i = 0; i < c; i++)
//        cin >> col[i];
//    int cnt = 0;
//    bool impossible;
//    for (int i = 0; i < 4; i++) { //0,90,180,270
//        string str = tetris[p-1][i];
//        if (m[str]) continue;
//        m[str] = 1;
//        if (str.size() == 1) { //1줄로 된 경우 어느 열이나 가능함
//            cnt += c;
//            continue;
//        }
//        for (int j = 0; j <= c - str.size(); j++) {
//            vector<string> temp = {col.begin() + j, col.begin() + j + str.size()};
//            int dif = stoi(temp[0]) - (str[0]-'0');
//            impossible = false;
//            for (int k = 1; k < temp.size(); k++){
//                if (dif == stoi(temp[k]) - (str[k]-'0')) continue;
//                else {
//                    impossible = true;
//                    break;
//                }
//            }
//            if (!impossible) cnt++;
//        }
//    }
//    cout << cnt << '\n';
//}
