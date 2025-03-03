#include <stdio.h>
int main() {
    int d,m,y;
    printf("Nhap nam: ");
    scanf("%d",&y);
    printf("Nhap thang: ");
    scanf("%d",&m);
    if (m<1||m>12)
        printf("Khong ton tai\n");
    else {
        if (m==2)(d=((y%4==0&&y%100!=0)||y%400==0))? 29 : 28;
        else if (m==4||m==6||m==9||m==11) d=30;
        else d=31;
        printf("Thang %d nam %d co %d ngay\n",m,y,d);
    }
    return 0;
}
