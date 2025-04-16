#include <stdio.h>
#include <math.h>
int main(){
    float x;
    printf ("Nhap diem:",x);
    scanf ("%f",&x);
    if (x<5) printf ("Yeu\n");
    else if (5<=x<7) printf ("TB\n");
    else if (7<=x<8) printf ("Kha\n");
    else if (8<=x<9) printf ("Gioi\n");
    else if (x>9) printf ("Xuat sac");
    return 0;
    }
