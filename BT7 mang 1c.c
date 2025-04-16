#include <stdio.h>
#include <math.h>
int comp(const void *a, const void*b){
    int *x = (int*)a;
    int *y = (int*)b;
    return *x - *y;
}
int main(){
    int n;
    printf ("Nhap phan tu cua mang: ");
    scanf ("%d", &n);
    int a[n];
    printf ("Nhap mang: ");
    for (int i = 0; i < n; i++){
        scanf ("%d", &a[i]);
    }
    qsort (a, n, sizeof(int),comp);
    for (int i = 0; i < n; i++){
        printf ("%d ", a[i]);
    }
}


