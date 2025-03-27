#include <stdio.h>
#include <math.h>
int UCLN(int a, int b){
    if (b == 0) return a;
    else return UCLN (b, a % b);
}
int BCNN(int a, int b){
    return (a * b)/ UCLN(a,b);
}
int main(){
    int a,b;
    scanf ("%d %d",&a,&b);
    printf ("UCLN: %d\n",UCLN(a,b));
    printf ("BCNN: %d\n",BCNN(a,b));
}
