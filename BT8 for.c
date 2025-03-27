#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf ("%d",&n);
    int gt = 1;
    for (int i = 1; i <= n; i++){
        gt *= i;
    }
    printf ("Gia tri: %d",gt);
}
