#include <stdio.h>
#include <math.h>
int main(){
    int x[10];
    int tong = 0;
    for (int i = 1; i <= 10; i++){
        scanf ("%d",&x[i]);
        tong += x[i];
    }
    printf ("%d",tong);
}
