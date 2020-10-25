#include<stdio.h>
#include<math.h>
#include<string.h>
#include"c.h"
int main(){
	int a,b,c,sl,n;
	printf("Nhap a: ");scanf("%d",&a);
	printf("Nhap b: ");scanf("%d",&b);
	printf("Nhap c: ");scanf("%d",&c);
	TinhP(5,6,7);
	printf("Nhap a: ");scanf("%d",&a);
	printf("Nhap b: ");scanf("%d",&b);
	printf("Nhap c: ");scanf("%d",&c);
	TinhS(a,b,c);
	printf("Nhap a: ");scanf("%d",&a);
	printf("Nhap b: ");scanf("%d",&b);
	UCBC(a,b);
	printf("\nNhap so luong ");scanf("%d",&sl);
	TongChuSo(sl);
	printf("\nNhap n: ");scanf("%d",&n);
	KiemTraSNT(n);
	TimSNTTiepTheo(n);
}
