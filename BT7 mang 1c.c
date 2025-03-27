#include <stdio.h>
#include <math.h>
void swap(int *l, int *h){
    int tmp=*l;
    *l=*h;
    *h=tmp;
}
void sort(int a[],int n){
    for (int i=0; i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]>a[j]){
                swap(&a[i],&a[j]);
            }
        }
    }
}
int main(){
    int n;
    scanf ("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf ("%d", &a[i]);
    }
    int x=10;
    int y=20;
    sort(a,n);
    for (int i = 0; i < n; i++){
        printf ("%d ",a[i]);
    }
}


