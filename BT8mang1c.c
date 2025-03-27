#include <stdio.h>
#include <math.h>
int main(){
    int n,m,i,j,k;

    printf("nhap mang 1 n= ");
    scanf ("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf ("%d", &a[i]);
    }
    printf("nhap mang 2 m= ");
    scanf ("%d",&m);
    int b[m];
    for (int i = 0; i < m; i++){
        scanf ("%d", &b[i]);
    }
    i=j=k=0;
    int s[n+m];
    while (i<n && j<m){
        if (a[i]<b[j]){
            s[k]=a[i];
            i++;
        }
        else{
            s[k]=b[j];
            j++;
        }
        k++;
    }
    while (i<n){
        s[k]=a[i];
        i++;
        k++;
    }
    while (j<m){
        s[k]=b[j];
        j++;
        k++;
    }
    for(k=0;k<n+m;k++)
        printf("%d ",s[k]);

}



