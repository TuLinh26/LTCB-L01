
#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c;
    float D,x1,x2;
    printf("nhập a: ");
    scanf("%f",&a);
    printf("nhập b: ");
    scanf("%f",&b);
    printf("nhập c: ");
    scanf("%f",&c);
    if (a==0) {
        if (b==0) {
            if (c==0) {
                printf("PT vo so nghiem \n");
            } else {
                printf("PT vo nghiem\n");
            }
        } else {
            printf("PT co 1 nghiem: x = %f\n", -c/b);
        }
        return 0;
    }

    D = b*b-4*a*c;

    if (D<0) {
        printf("PT vo nghiem\n");
    } else if (D==0) {
        x1 =-b/(2 * a);
        printf("PT co nghiem kep: x =%f\n",x1);
    } else {
        x1 = (-b+sqrt(D))/(2*a);
        x2 = (-b-sqrt(D))/(2*a);
        printf("PT co 2 nghiem phan biet:\n");
        printf("x1=%f\n",x1);
        printf("x2=%f\n",x2);
    }

    return 0;
}
