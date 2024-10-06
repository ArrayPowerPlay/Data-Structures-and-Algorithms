#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n) {
    // bubble the max element to the end of the list
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bubblesort_ver2(int arr[], int n) {
    bool check;
    for (int i = 0; i < n - 1; i++) {
        check = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                check = true;
            }
        }
        if (check == false) break;
    }
}

int main() {
    int n;
    cin >> n;
    int *a = (int *) malloc (n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    bubblesort(a, n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    free(a);
}
