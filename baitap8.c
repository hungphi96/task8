#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	printf("kieu int: %d Byte", sizeof(char));
	printf("\nSo nguyen: 5");
	printf("\nKieu float: %d Byte", sizeof(float));
	printf("\nSo thuc kieu float: 2.514400 ");
	printf("\nKieu double: %d Byte", sizeof(double));
	printf("\nSo thuc kieu double: 5.1254521548");
	printf("\nKieu char: %d Byte", sizeof(char));
	printf("\nKi tu: U");
	printf("\nKieu long int: %d Byte", sizeof(long int));
	printf("\nkieu long double: %d Byte", sizeof(long double));
	return 0;
}
