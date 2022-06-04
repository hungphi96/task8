#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	double toan, ly, hoa;
	printf("Nhap lan luot 3 diem toan, ly, hoa: ");
	scanf("%lf %lf %lf", &toan, &ly, &hoa);
	printf("Tong diem 3 mon la: %f\n", toan+ly+hoa);
	printf("Diem trung binh 3 mon hoc la: %f", (toan+ly+hoa)/3);
	return 0;
}
