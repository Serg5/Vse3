//������� 6
#include<stdio.h>
#include<math.h>
double x1, x2, result1, result2;
void f(void);
void main()
{
	printf("Task6\r\n");
	printf("Input x2 \r\n");
	scanf_s("%lf", &x2);
	f();
	printf("x1=%.2lf; f1=%.2lf\r\n", x1, result1);
	printf("x2= %.2lf; f2= %.2lf \r\n", x2, result2);
	system("pause");
}