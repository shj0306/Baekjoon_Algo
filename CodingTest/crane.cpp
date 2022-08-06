/*
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0; int bef_doll = 0;
    vector<int> basket;
    for (int i = 0; i < moves.size(); i++) {
        for (int j = 0; j < board[moves[i]-1].size(); j++) {
            if (board[j][moves[i]-1] != 0) { //인형을 만날 때
                if (bef_doll == board[j][moves[i]-1]) { //바구니에 최근에 쌓인 인형이면
                    basket.pop_back();
                    bef_doll = basket[basket.size()-1];
                    answer += 2;
                }else {
                    basket.push_back(board[j][moves[i]-1]);
                    bef_doll = board[j][moves[i]-1];
                }
                board[j][moves[i]-1] = 0;
                break;
            }
        }

    }
    return answer;
}*/
