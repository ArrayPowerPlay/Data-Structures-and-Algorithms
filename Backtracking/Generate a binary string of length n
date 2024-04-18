#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100000
// Generate a binary string of length n using Backtracking with Recursive

int a[MAX_SIZE];
int n;
int count = 1;

void Try(int k) {
    for(int v = 0; v <= 1; v++) {
        a[k] = v;
        if(k == n) {
            printf("Cau hinh %d: ", count++);
            for (int i = 1; i <= n; i++) printf("%d", a[i]);
            printf("\n");
        }
        else Try(k + 1);
    }
}


int main() {
    scanf("%d", &n);
    Try(1);
}
