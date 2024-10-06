#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i - 1;
        int key = arr[i];
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int *a = (int *) malloc (n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    insertion_sort(a, n);
    printf("List after being sorted: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
}
