#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	double top, bottom, H, S;
	printf("Nhap 2 canh day hinh thang: ");
	scanf("%lf %lf", &top, &bottom);
	printf("Nhap chieu cao hinh thang: ");
	scanf("%lf", &H);
	S=(top+bottom)*H/2;
	printf("Dien tich hinh thang la: %f", S);
	return 0;
}
