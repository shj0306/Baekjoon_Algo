/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct ROOM {
    int flag; //1이면 몬스터
    int dmg; //1인 경우 몬스터 데미지, 2인 경우 용사 공격력 버프
    int health; //1인 경우 몬스터 체력 2인 경우 용사 체력에 더한다.
};

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, dmg; //방의 개수, 용사 초기 공격력
    cin >> n >> dmg;
    vector<ROOM> rooms(n);
    for (int i = 0; i < n; i++) cin >> rooms[i].flag >> rooms[i].dmg >> rooms[i].health;
    ll low_hp = 1, high_hp = 1e12 * 123456, mid;
    while (low_hp <= high_hp) {
        mid = (low_hp + high_hp) / 2;
        ll health = mid; //현재 용사 체력
        ll cur_dmg = dmg; //현재 용사 공격력
        bool lose = false;
        for (int i = 0; i < n; i++) {
            if (rooms[i].flag == 1) { //monster
                ll hit_cnt = rooms[i].health / cur_dmg;
                if (rooms[i].health % cur_dmg) hit_cnt++;
                if (health <= (hit_cnt - 1) * rooms[i].dmg) {//용사 남은 체력이 버티지 못하는 경우
                    lose = true; break;
                }
                health -= (hit_cnt - 1) * rooms[i].dmg;
            }else {//potion
                health = (health + rooms[i].health > mid) ? mid : health + rooms[i].health;
                cur_dmg += rooms[i].dmg;
            }
        }
        if (lose) low_hp = mid + 1;
        else high_hp = mid - 1;
    }
    cout << low_hp << '\n';
    return 0;
}*/
