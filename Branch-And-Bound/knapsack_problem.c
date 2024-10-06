#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX 100000

// the maximum weight that cannot be exceeded
int max_weight;
// number of knapsacks
int n;
// value of each knapsack
int a[MAX];
// weight of each knapsack
int b[MAX];
// value/ weight of each knapsack
float c[MAX];
// largest value of all knapsacks
int f_max = INT_MIN;
// number of each knapsack
int x[MAX];
// value of total value of all knapsacks in all possible scenario
float f;
// number of each knapsack in optimal answer to this problem
int opt[MAX];
int weight_left;
int current_value = 0;

// function to sort knapsacks by value/weight ratio (descending order)
void Try(int k) {
    for (int v = weight_left / b[k]; v >= 0; v--) {
        x[k] = v;
        weight_left -= b[k] * v;
        current_value += v * a[k];
        if (k == n) {
            if (current_value > f_max) {
                f_max = current_value;
                for (int i = 1; i <= n; i++) opt[i] = x[i];
            }
        }
        else {
            f = current_value + ((float)weight_left / b[k + 1]) * a[k + 1];
            if (f > f_max) Try(k + 1);
        } 
        weight_left += b[k] * v;
        current_value -= v * a[k];
    }    
}

int main()
{
    scanf("%d", &n);
    printf("Enter values of each knapsack: "); 
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    printf("Enter weight of each knapsack: ");
    for (int i = 1; i <= n; i++) scanf("%d", &b[i]);
    printf("Enter max weight: ");
    scanf("%d", &max_weight);
    weight_left = max_weight;
    for (int i = 1; i <= n; i++) c[i] = (float) (a[i] / b[i]);
    Try(1);
    printf("Optimal numbers of each knapsack are: ");
    for (int i = 1; i <= n - 1; i++) printf("%d->", opt[i]);
    printf("%d", opt[n]);
    printf("\n");
    printf("Max value: %d", f_max);
    return 0;
}
