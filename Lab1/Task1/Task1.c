#include<stdio.h>
#include<math.h>
//Задание 1
void main()
{
	printf("Task1 \r\n");
	//ввод кодом
	int x1 = 8, x2;
	double y1, y2;
	y1 = 1 / (sqrt(2) + sqrt(x1));
	printf("x1=%d; f1=%.2lf\r\n", x1, y1);

	//ввод вручную
	printf("Input x2 \r\n");
	scanf_s("%d", &x2);
	y2 = 1 / (sqrt(2) + sqrt(x2));
	printf("x2= %d; f2= %.2lf \r\n", x2, y2);

	system("pause");
}
