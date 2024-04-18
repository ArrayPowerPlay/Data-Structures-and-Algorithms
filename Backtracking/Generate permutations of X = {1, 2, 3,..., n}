#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100000
// Generate permutations of X = {1,2,3,...,n}

int a[MAX_SIZE];
int n;
int count = 1;

int check(int k, int v) {
    // check if a[i] != v with i = 1,2,...,k-1
    if (k == 1) return 1;
    else {
        for (int i = 1; i <= k - 1; i++) if (a[i] == v) return 0;
        return 1;
    }
}

void Try(int k) {
    for (int v = 1; v <= n; v++) {
        if (check(k, v)) {
            a[k] = v;
            if (k == n) {
                printf("Cau hinh %d: ", count++);
                for (int i = 1; i <= n; i++) printf("%d", a[i]);
                printf("\n");
            }
            else Try(k + 1);
        }
        else continue;
    }
}

int main() {
    scanf("%d", &n);
    Try(1);
}
