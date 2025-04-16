#include<stdio.h>
#include<math.h>
#define ll long long
int a[10000001];
int a3[10000001];
int a2[10000001];
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int b = n,c = n;
	int vt1;
	for(int i = 0 ;i < 10000001 ;i++){
		a[i] = n % 2;
		n /= 2;
		if(n == 0){
			vt1 = i;
		break;
	}
	}
	printf("he co so 2 la: ");
	for(int i = vt1 ;i>=0 ;i--){
		printf("%d", a[i]);
	}
	printf("\n");
	int vt2;
	for(int i = 0;i < 10000001; i++){
		a2[i]=b % 8;
		b /= 8;
		if(b == 0){
			vt2 = i;
		break;
	}
	}
	printf("he co so 8 la: ");
	for(int i = vt2; i >= 0; i--){
		printf("%d",a2[i]);
	}
	printf("\n");
	int vt3;
	for(int i =0 ;i < 10000001 ;i++){
		a3[i] = c % 16;
		c/=16;
		if(c == 0){
			vt3 = i;
		break;
	}
	}
	printf("he co so 16 la: ");
	for(int i = vt3; i>=0 ;i--){
		if(a3[i] >= 10){
			printf("%c", a3[i] + 55);
		}
		else printf("%d", a3[i]);
	}	
}
