#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf ("%d",&n);
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++){
        if (n % i == 0){
            sum += i;
            sum += n / i;
            if (i * i == n) sum -= i;
    }
}
    if (sum == 2 * n)
        printf ("Day la so hoan hao");
    else printf ("Day khong la so hoan hao");
}
