/*
#include <bits/stdc++.h>
using namespace std;

struct LList {
    int val;
    LList *next;
    LList *prev;
};
stack<int> del_list;
LList* arr;

void init(int n) {
    arr[0].val = 0;
    arr[0].next = &arr[1];
    arr[0].prev = nullptr;

    for (int i = 1; i < n-1; i++) {
        arr[i].val = i;
        arr[i].next = &arr[i+1];
        arr[i].prev = &arr[i-1];
    }

    arr[n-1].val = n-1;
    arr[n-1].next = nullptr;
    arr[n-1].prev = &arr[n-2];
}

int cut_link(int del) {
    if (arr[del].next == nullptr) { //마지막인 경우
        (arr[del].prev)->next = nullptr;
        del_list.push(del);
        return arr[del].prev->val;
    }
    else if (arr[del].prev == nullptr) {//처음인 경우
        (arr[del].next)->prev = nullptr;
    }else { //중간
        (arr[del].prev)->next = arr[del].next;
        (arr[del].next)->prev = arr[del].prev;
    }
    del_list.push(del);
    return arr[del].next->val;
}

void recover_link(int del) {
    if(arr[del].next == nullptr) { //마지막
        (arr[del].prev)->next = &arr[del];
    }else if (arr[del].prev == nullptr) {//처음
        (arr[del].next)->prev = &arr[del];
    }else {
        (arr[del].prev)->next = &arr[del];
        (arr[del].next)->prev = &arr[del];
    }
}

int find_node(int dir, int del, int num) {
    int cnt = 0;
    LList *cur = &arr[del];
    if (dir == 1) { //up
        while (cnt < num) {
            cur = cur->prev;
            cnt++;
        }
    }else {//down
        while(cnt < num) {
            cur = cur->next;
            cnt++;
        }
    }
    return cur->val;
}

string solution(int n, int k, vector<string> cmd) {
    string answer = "";
    answer.resize(n);
    arr = new LList[n];
    del_list = stack<int>();
    int del = k;

    init(n);

    for (auto & i : cmd) {
        if (i[0] == 'C') {
            del = cut_link(del);
        }else if (i[0] == 'Z') {
            recover_link(del_list.top());
            del_list.pop();
        }else if (i[0] == 'U') {
            string num = i.substr(2);
            del = find_node(1,del, stoi(num));
        }else { //D
            string num = i.substr(2);
            del = find_node(0,del, stoi(num));
        }
    }
    while(!del_list.empty()) {
        answer[del_list.top()] = 'X';
        del_list.pop();
    }
    for (int i = 0; i < n; i++) {
        if (answer[i] == 'X') continue;
        answer[i] = 'O';
    }

    return answer;
}*/
