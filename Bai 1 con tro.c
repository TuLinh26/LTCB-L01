#include <stdio.h>
#include <math.h>
int hoanvi(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main(){
    int x,y;
    printf ("Nhap x,y:");
    scanf ("%d %d", &x, &y);
    hoanvi (&x, &y);
    printf ("Hoan vi: %d %d", x, y);
}
