//Задание 2
#include<stdio.h>
#include<math.h>

double f(double x)
{
	return (1 / (sqrt(2) + sqrt(x)));
}
void main()
{
	printf("Task2\r\n");
	int x1 = 7, x2;
	printf("x1=%d; f1=%.2lf\r\n", x1, f(x1));
	printf("Input x \r\n");
	scanf_s("%d", &x2);
	printf("x2= %d; f2= %.2lf \r\n", x2, f(x2));
	system("pause");
}