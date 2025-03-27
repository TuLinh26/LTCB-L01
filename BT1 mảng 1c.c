#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf ("%d", &n);
    int a[10];
    for (int i = 0; i < 10; i++){
        scanf ("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++){
        printf ("%d", a[i]);
    }
}
