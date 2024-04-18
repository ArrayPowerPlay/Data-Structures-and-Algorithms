#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100000
// Generate permutations of n elements

int a[MAX_SIZE];

void swap(int *a, int *b) {
    // swap value
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int check_last(int n) {
    // check if this is the last form or not. Return 1 if last form and vice versa
        for (int i = 1; i <= n; i++) {
            if (a[i] != n + 1 - i) return 0;
        }
        return 1;
}

void Generate(int n) {
    // next Generate algorithm
    for (int i = 1; i <= n; i++) a[i] = i;   
    int count = 1;
    while(1) {
        printf("Cau hinh %d: ", count++);
        for (int i = 1; i <= n; i++) printf("%d ", a[i]);
        printf("\n");
        if (!check_last(n)) {
            // create an algorithm to move from current form to the next form
            int v = n - 1;
            while (v >= 1) {
                if (a[v] < a[v + 1]) break;
                v--;
            }
            int k = n;
            while (k >= 1) {
                if (a[k] > a[v]) break;
                k--;
            }
            swap(&a[v], &a[k]);
            int h = (n + v + 1)/2;
            for (int i = v + 1; i <= h; i++) swap(&a[i], &a[n + v + 1 - i]);
        }
        else break;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Generate(n);
}
