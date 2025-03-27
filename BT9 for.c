#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf ("%d",&n);
    double sum = 0;
    int gt = 1;
    for (int i = 1; i <= n; i++){
        gt *= i;
        sum += 1.0 / gt;
    }
    printf ("S = %lf",sum);
}
