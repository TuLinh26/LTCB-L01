#include <stdio.h>
#include <math.h>
long long gt(int n){
    if (n == 0 || n == 1) return 1;
    else return 1ll * n * gt(n - 1);
}
int main(){
    int n;
    printf ("Nhap so: ");
    scanf ("%d", &n);
    if (n < 0) printf ("Khong ton tai gia thua");
    else
        printf ("%d! = %lld\n",n, gt(n));
}
