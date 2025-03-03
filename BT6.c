#include <stdio.h>
int main(){
    float a,b,c,d,e,f;
    float D,Dx,Dy,x,y;
    printf("Nhap lan luot cac so a,b,c,d,e,f:");
    scanf("%f %f %f %f %f %f ",&a,&b,&c,&d,&e,&f);
    D=a*e-b*d;
    if (D==0){
        Dx = c*e-b*f;
        Dy = a*f-c*d;
        if (Dx==0&&Dy==0){
            printf("He co vo so nghiem\n");
        } else {
            printf("He vo nghiem\n");
        }
    } else {
        Dx = c*e-b*f;
        Dy = a*f-c*d;
        x = Dx/D;
        y = Dy/D;
        printf("He co 1 nghiem duy nhat:\n");
        printf("x =%.2f\n",x);
        printf("y =%.2f\n",y);
    }

    return 0;
}
