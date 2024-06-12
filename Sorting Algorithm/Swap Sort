#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int n;
    scanf("%d", &n);
    int *a = (int *) malloc (n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("List before sorting: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) 
            if (a[i] > a[j]) swap(&a[i], &a[j]);
    }
    printf("List after sorting: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
}
