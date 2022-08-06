/*
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> P[3][2][2][2]; //{java,cpp,python} {back,front} {junior,senior} {pizza,chicken}
int getIdx(string str){
    if(str == "cpp") return 0;
    if(str == "java") return 1;
    if(str == "python") return 2;
    if(str == "backend") return 0;
    if(str == "frontend") return 1;
    if(str == "junior") return 0;
    if(str == "senior") return 1;
    if(str == "chicken") return 0;
    if(str == "pizza") return 1;
    return -1;
}
int get(vector<int>& arr, int score){
    if(arr.size() == 0) return 0;
    int idx = lower_bound(arr.begin(), arr.end(), score) - arr.begin();
    return arr.size() - idx;
}
int getCount(string q){
    int ret = 0;
    vector<string> sp;
    string tmp = "";
    for(int j = 0; j < q.size(); ++j){
        if(q[j] == ' '){
            sp.push_back(tmp);
            tmp = "";
            if(sp.size() < 4)
                j += 4;
        }else tmp += q[j];
    }
    int score = stoi(tmp);
    vector<int> idx;
    for(int j = 0; j < 4; ++j) idx.push_back(getIdx(sp[j]));
    for(int i1 = 0; i1 < 3; ++i1){
        if(idx[0] != -1 && idx[0] != i1) continue;
        for(int i2 = 0; i2 < 2; ++i2){
            if(idx[1] != -1 && idx[1] != i2) continue;
            for(int i3 = 0; i3 < 2; ++i3){
                if(idx[2] != -1 && idx[2] != i3) continue;
                for(int i4 = 0; i4 < 2; ++i4){
                    if(idx[3] != -1 && idx[3] != i4) continue;

                    ret += get(P[i1][i2][i3][i4], score);
                }
            }
        }
    }
    return ret;
}
vector<int> solution(vector<string> info, vector<string> query) {
    vector<int> ans;
    for(int j = 0; j < info.size(); ++j){
        vector<string> sp;
        string tmp = "";
        for(int i = 0; i < info[j].size(); ++i){
            if(info[j][i] == ' '){
                sp.push_back(tmp);
                tmp = "";
            }else
                tmp += info[j][i];
        }
        int score = stoi(tmp);
        int i1, i2, i3, i4;
        i1 = getIdx(sp[0]);
        i2 = getIdx(sp[1]);
        i3 = getIdx(sp[2]);
        i4 = getIdx(sp[3]);

        P[i1][i2][i3][i4].push_back(score);
    }
    for(auto & i1 : P)
        for(auto & i2 : i1)
            for(auto & i3 : i2)
                for(auto & i4 : i3)
                    sort(i4.begin(), i4.end());

    for(auto & q : query) ans.push_back(getCount(q));
    return ans;
}*/
