#include <stdio.h>
#include <math.h>
int main(){
    long long a[93];
    a[0] = a[1] = 1;
    for (int i = 2; i < 93; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    int n;
    printf ("Nhap n:");
    scanf ("%d", &n);
    printf ("So fibonanci thu n: %lld", a[n - 1]);
}
