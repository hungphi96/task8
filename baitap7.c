#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int luachon;
	double a,b,c;
	printf("ban muon tinh dien tich, chu vi hinh gi?\n");
	printf(" 1. Hinh vuong.\n2. Hinh chu nhat.\n3. Hinh tron.\n");
	scanf("%d", &luachon);
	if(luachon==1)
	{
		printf("nhap vao canh hinh vuong: ");
		scanf("%lf", &a);
		printf("dien tich hinh vuong la : %f", a*a);
		printf("\nchu vi hinh vuong la: %f", a*4);
	}
	else if(luachon==2)
	{
		printf("nhap vao 2 canh hinh chu nhat: ");
		scanf("%lf%lf", &a, &b);
		printf("dien tich hinh chu nhat la : %f\n", a*b/2);
		printf("chu vi hinh vuong la: %f\n", (a+b)*4);
	}
	else if(luachon==3)
	{
		printf("nhap vao ban kinh hinh tron: ");
		scanf("%lf", &c);
		printf("dien tich hinh tron la : %f\n", c*c*3.14);
		printf("chu vi hinh tron la: %f\n", c*2*3.14);
	}
	else
	{
		printf("Ban da nhap sai");
	}
	return 0;
}

