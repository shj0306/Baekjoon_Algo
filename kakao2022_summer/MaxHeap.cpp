#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 100000;

template <typename T>
class HEAP {
private:
    int max(int a, int b) {
        return a > b;
    }

//   k��° ����� �ڽ��� k*2, k*2+1
    void push_swap(int cur) {
        if (cur == 1) return;
        int par = cur / 2;
        if (heapArr[par] < heapArr[cur]) {
            T tmp = heapArr[par];
            heapArr[par] = heapArr[cur];
            heapArr[cur] = tmp;
            push_swap(cur / 2);
        }
    }

    /*
     * ���� �ڽ��� �����Ѵٸ� cur*2�� ���� ũ�⺸�� �۰ų� ���ƾ� �Ѵ� == �ڽ� ���� ���� �Ǵ�
     * left�� right�� ���� ���� ������� ���ϰ� �ڽ��� ���ٸ� -1�̶�� ������ set
     * ���� ���� ���� Ʈ�� ����̱� ������ ���� �ڽ��� ������ �翬�� ������ �ڽ��� ����.
     */

    void pop_swap(int cur) {
        int left, right, ch;
        left = (cur * 2 <= _sz ? cur * 2 : -1);
        right = (cur * 2 + 1 <= _sz ? cur * 2 + 1 : -1);

        if (left == -1 && right == -1) {
            ch = -1;
        }else if (left != -1 && right == -1) {
            ch = left;
        }else { //�ڽ��� �Ѵ� �����ϸ�
            ch = (heapArr[left] > heapArr[right] ? left : right);
        }

        if (ch == -1) return;
        //�ڽź��� �ڽ��� �� ū ���� ������ �� swap
        if (heapArr[ch] > heapArr[cur]) {
            T tmp = heapArr[ch];
            heapArr[ch] = heapArr[cur];
            heapArr[cur] = tmp;
            pop_swap(ch);
        }
    }

public:

    int _sz;
    T *heapArr;
    HEAP(int n) {
        _sz = 0;
        heapArr = new int[n+1];
    }
    ~HEAP() {
        delete [] heapArr;
    }

    int empty() {
        return !_sz;
    }

    int size() {
        return _sz;
    }

    T top() {
        return !_sz ? -1 : heapArr[1];
    }

    // heap�� ������ �κп� ���� (_sz = ���� ũ��)
    void push(int val) {
        heapArr[++_sz] = val;
        push_swap(_sz);
    }

    /*
     * _sz == 0�̸� pop�� ���� ������ return
     * ���� root�� �켱 �������ְ� ���� �������� ��ġ�� ���� root�� �־��ش�
     * == heapArr[1] = heapArr[_sz--]
     */
    void pop() {
        if (!_sz) {
            return;
        }
        heapArr[1] = heapArr[_sz--];
        pop_swap(1);
    }


};

int main() {
    int size;
    cin >> size;
    HEAP<int> pq(size);

    int arr[] = {2, 4, 11, 12, 8, 10, 14, 12, 20};
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
        pq.push(arr[i]);

    pq.push(30);
    pq.push(15);

//    pq.pop();
//    pq.pop();

    cout << pq.top() << endl;
    return 0;
}