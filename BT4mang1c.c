#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf ("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf ("%d", &a[i]);
    }
int min = 1e9,vtmin;
    for (int i = 0; i < n; i++){
        if (min > a[i]){
            min = a[i];
            vtmin = i + 1;
        }
    }
int max = -1e9,vtmax;
    for (int i = 0; i < n; i++){
        if (max < a[i]){
            max = a[i];
            vtmax = i + 1;
        }
    }
    printf ("max, min:%d\n %d\n",max,min);
    printf ("vtmax: %d",vtmax);
    printf ("vtmin: %d",vtmin);
    }
}

