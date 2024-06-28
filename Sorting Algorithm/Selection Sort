#include <stdio.h>
#include <stdlib.h>

void swap(int &a, int &b) {
    int c;
    c = a;
    a = b;
    b = c;
}

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[index] > arr[j]) index = j;
        }
        if (index != i) swap(arr[index], arr[i]);
    }
}

void selection_sort_ver2(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int index = i;
        int check = 0;
        for (int j = i + 1; j < n; j++) {
            if (arr[index] > arr[j]) index = j;
            if (j < n - 1 && arr[j] > arr[j + 1]) check++;
        }
        if (index != i) swap(arr[index], arr[i]);
        else if (check == 0) return;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int *a = (int *) malloc (n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    selection_sort(a, n);
    printf("List after being sorted: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
}
