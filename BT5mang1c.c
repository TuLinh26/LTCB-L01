#include <stdio.h>
#include <math.h>
int main(){
    int x,n;
    scanf ("%d %d", &x, &n);
    int dem = 0;
    int a[n];
    for (int i = 0; i < n; i++){
        scanf ("%d", &a[i]);
        if (a[i] == x){
            ++dem;
        }
    }
    printf ("Phan tu x= %d xuat hien %d lan",x,dem);
}
