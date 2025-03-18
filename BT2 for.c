#include <stdio.h>
#include <math.h>
int nto(int x){
    if (x <= 1)
        return 0;
    for (int i = 2; i <= sqrt(x); i++){
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int main(){
    int x;
    scanf ("%d", &x);
    if (nto(x))
        printf ("Day la so nguyen to");
    else printf ("Day khong phai la so nguyen to");
    return 0;
}

