#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int arr[] = {1,7,2,10,4,5,3};
int tmp[7];

/*
 * ������ �� ���Ҹ� ���������� ���Ͽ� �����ϴ� �˰���
 * O(N^2)
 */
void bubble_sort(int tmp[], int sz) {
    for (int i = 0; i < sz - 1; i++) {
        for (int j = 0; j < sz - 1 - i; j++) {
            if (tmp[j] > tmp[j+1]) {
                int temp = tmp[j];
                tmp[j] = tmp[j+1];
                tmp[j+1] = temp;
            }
        }
    }
}

/*
 * �ش� �ε����� ���� ���Ҹ� Ž���Ͽ� ��ġ�� ��ȯ�ϴ� �˰���
 * O(N^2)
 */
void selection_sort(int tmp[], int sz) {
    for (int i = 0; i < sz; i++) {
        int idx = i;
        int val = tmp[idx];
        for (int j = i; j < sz; j++) {
            if (val > tmp[j]) {
                idx = j;
                val = tmp[j];
            }
        }
        int temp = tmp[i];
        tmp[i] = val;
        tmp[idx] = temp;
    }
}

/*
 * ���Ұ� � ��ġ�� ���� �ϴ� �� Ž���ϰ�, ��ġ�� ��ȯ�ϴ� �˰���
 * O(N^2)
 */
void insertion_sort(int tmp[], int sz) {
    for (int i = 1; i < sz; i++) {
        for (int j = i-1; j >= 0 && tmp[j+1] < tmp[j]; j--) {
            int temp = tmp[j+1];
            tmp[j+1] = tmp[j];
            tmp[j] = temp;
        }
    }
}

/*
 * ����, ���� ����� ����� ���� ���. �迭�� �� �̻� ���� �� ���� �� ���� �����ϰ�,
 * merge�ϴ� �������� ������ ����˴ϴ�.
 * �������� ������ ������ �����ʴ� ���� ������μ� �ּ�, �־�, ��� �ð� ���⵵�� nlogn�Դϴ�
 * (��� ȣ�� logn * ���� n)
 * merge sort�� �������� ������ ������� �������� ������ ����������,
 */
 ///����
 ///�迭�� ����ϸ� �ӽð����� �ʿ��ϰ� ���ڵ��� ũ�Ⱑ Ŀ������
 ///�ӽù迭���� ������ �̵��� ������ ������ �������ϴ�.

void mergeSort(int tmp[], int src[], int s, int e) {
    if (s >= e) {
        return;
    }
    int mid = (s + e) / 2;
    mergeSort(tmp, src, mid + 1, e);
    mergeSort(tmp, src, s, mid);

    int p = s;
    int q = mid + 1;
    int idx = s;
    while(p <= mid || q <= e) {
        if (q > e || (p <= mid && src[p] < src[q])) {
            tmp[idx++] = src[p++];
        }else {
            tmp[idx++] = src[q++];
        }
    }

    for (int i = s; i <= e; i++)
        src[i] = tmp[i];
}

/*
 * merge sort�� �޸� �迭�� ��յ��ϰ� �����մϴ�.
 * �迭 �� �ϳ��� �ǹ����� �����ϰ� �ǹ��� �������� ���� ���Ҵ� ���� ū ���Ҵ� ���������� �ű��.
 * �Ű��� ������ ���ҵ鿡 ���ؼ� �ٽ� �ǹ��� ��� �����ϴ� ������ ��������� ȣ���մϴ�
 *
 * ��� �ð� ���⵵�� nlogn(��� ȣ�� ���� logN * �� �ܰ躰 �迭�� �� �� N)�Դϴ�.
 *
 * �迭�� �̸� ���ĵǾ��ִ� ���¿��� �ǹ��� �ּ� �� Ȥ�� �ִ� ������ �����ϴ� ���
 * �������� �̵��� �߻����� �ʽ��ϴ�. �־��� ��� �ð� ���⵵�� n^2�Դϴ�.
 *
 *
 * locality�� �������� �� �� ������ ���� ����
 *
 * quick sort��
 * ��� ȣ���� ������� �����ϰ� ������ Ž�� ��ġ�� ũ�� ������ �ʱ� ������ locality�� Ȱ���� �� �ֽ��ϴ�.
 *
 *
 */

void quickSort(int arr[], int left, int right) {
    if (left >= right) return;

    int l = left;
    int r = right;
    int pivot = arr[left];

    while(l <= r) {
        while (arr[l] < pivot) {
            l++;
        }
        while(arr[r] > pivot) {
            r--;
        }

        if (r >= l) {
            int tmp = arr[l];
            arr[l] = arr[r];
            arr[r] = tmp;
            l++; r--;
        }
    }

    quickSort(arr, left, r);
    quickSort(arr, l, right);
}

int main() {
    mergeSort(tmp, arr, 0, 6);
    for (int i = 0; i < 7; i++)
        cout << arr[i] << ' ';
}