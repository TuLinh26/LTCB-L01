#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf ("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf ("%d", &a[i]);
        if (a[i] < 0) a[i] = 0;
    }
    printf ("Mang:");
    for (int i = 0; i < n; i++){
        printf ("Mang thay the: %d",a[i]);
    }
}

