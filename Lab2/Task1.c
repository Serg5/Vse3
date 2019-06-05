#include<stdio.h>
#include<math.h>
//Задание 1
#include<stdio.h>
#include<math.h>
  //Задание 1  Вариант 8
_Bool isInArea(double x, double y)
{
	int o;
	if (x > 1 || y > 1)
		o = 0;
	else if (x > 0 && y < 0)
		o = 0;
	else
		o = 1;
	return (o);
}
// задание 2
double f(double x)
{
	double o;
	if (x < 3.2)
		return(x*x*x*x+ 9);
	else
		return((54 * x*x*x*x) / (-5 * x*x - 7));
}
// задание 3
void main(void)
{
	int n;
	double x, y;
	printf("Task 3 \r\n Chose case \r\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case '1':
		printf("Task 1\r\n Input x\r\n");
		scanf_s("%lf", &x);
		printf("Input y\r\n");
		scanf_s("%lf", &y);
		printf("Answer: %d \r\n", isInArea(x, y));
		break;
	case '2' :
		printf("Task 2\r\n Input x\r\n");
		scanf_s("%lf", &x);
		printf("Answer: %.2lf \r\n", f(x));
		break;
	default:
		printf("Wrong input");
		break;
	}

	system("pause");
}