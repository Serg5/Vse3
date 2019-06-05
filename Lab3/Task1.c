#include<stdio.h>
#include<math.h>
//Задание 1 Вариант 3
double summ1a(int n) // через if
{
	double o=0;
	for (int i = 0; i < n; ++i)
	{
		if (i & 1)
			o = o - 1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			o = o + 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
	}
	return(o);
}
double summ1b(int n)  // через while
{
	double o = 0;
	int i = 0;
	while (i < n)
	{
		if (i & 1)
			o = o - 1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			o = o + 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
			++i;
	}
	return(o);
}

double summ1c(int n) // через do while
{
	double o = 0;
	int i = 0;
	do
	{
		if (i & 1)
			o = o - 1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			o = o + 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		++i;
	} while (i < n);
	return(o);
}

// Задание 2
double summ2a(double eps)
{
	double o = 0, a=10000;
	for (int i = 0; a > eps; ++i)
	{
		
		if (i & 1)
		{
			a = 1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
			o = o - a;
		}
		else
		{
			a = 1 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
			o = o + a;
		}
	}
	return(o);
}
double summ2b(double eps)
{
	double o = 0, a = 10000;
	int i = 0;
	while (a > eps)
	{
		if (i & 1)
		{
			a = 1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
			o = o - a;
		}
		else
		{
			a = 1 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
			o = o + a;
		}
			++i;
	}
	return(o);
}
double summ2c(double eps)
{
	double o = 0, a = 10000;
	int i = 0;
	do
	{
		if (i & 1)
		{
			a = 1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
			o = o - a;
		}
		else
		{
			a = 1 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
			o = o + a;
		}
		++i;
	}
	while (a > eps);
	return(o);
}
// задание 3
void print1(int n, int k)
{
	double g;
	for (int i = 0; i < n; ++i)
	{
		if (i & 1)
			g = - 1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			g = 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		if (i == k)
			continue;
		printf("%.2lf  ",g);
	}
}
void print2(int n, int k)
{
	double g;
	int i = 0;
	while (i < n)
	{
		if (i & 1)
			g = -1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			g = 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		if (i == k)
		{
			++i;
			continue;
		}
		printf("%.2lf  ", g);
		++i;
	}
}
void print3(int n, int k)
{
	double g;
	int i = 0;
	do
	{
		if (i & 1)
			g = -1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			g = 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		if (i == k)
		{
			++i;
			continue;
		}
		printf("%.2lf  ", g);
		++i;
	} while (i < n);
}
// задание 4
int findFirstElement1(double eps)
{
	double g;
	for (int i = 0; i > -1; ++i)
	{
		if (i & 1)
			g = -1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			g = 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		if (g <= eps)
		{
			printf("%d", i + 1);
			break;
		}
	}
}
int findFirstElement2(double eps)
{
	double g;
	int i = 0;
	while (i > -1)
	{
		if (i & 1)
			g = -1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			g = 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		if (g <= eps)
		{
			printf("%d", i + 1);
			break;
		}
		++i;
	}

}

int findFirstElement3(double eps)
{
	double g;
	int i = 0;
	do

	{
		if (i & 1)
			g = -1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			g = 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		if (g <= eps)
		{
			printf("%d",i+1);
			break;
		}
		++i;
	} while (i > -1);

}
// Задание 5
int findFirstNegativeElement1(double eps)
{
	double g;
	for (int i = 0; i > -1; ++i)
	{
		if (i & 1)
			g = -1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			g = 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		if (g <= eps && g<0)
		{
			printf("%d", i + 1);
			break;
		}
	}
}
int findFirstNegativeElement2(double eps)
{
	double g;
	int i = 0;
	while (i > -1)
	{
		if (i & 1)
			g = -1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			g = 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		if (g <= eps && g<0)
		{
			printf("%d", i + 1);
			break;
		}
		++i;
	}

}

int findFirstNegativeElement3(double eps)
{
	double g;
	int i = 0;
	do

	{
		if (i & 1)
			g = -1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			g = 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		if (g <= eps && g<0)
		{
			printf("%d", i + 1);
			break;
		}
		++i;
	} while (i > -1);

}


// задание 6
void main(void)
{
	int u, n = 6, k=3;
	double eps = 1;
	printf("Task 6 \r\n Chose case \r\n");
	scanf_s("%d", &u);
	switch (u)
	{
	case '1':

		printf("Task1 \r\n%.2lf \r\n%.2lf \r\n%.2lf \r\n", summ1a(n), summ1b(n), summ1c(n));
		break;
	case '2':
		printf("Task2 \r\n%.2lf \r\n%.2lf \r\n%.2lf \r\n", summ2a(eps), summ2b(eps), summ2c(eps));
		break;
	case '3':
		printf("Task3 \r\n");
		print1(n, k);
		printf("\r\n");
		print2(n, k);
		printf("\r\n");
		print3(n, k);
		printf("\r\n");
		break;
	case '4' :
		printf("Task4 \r\n");
		findFirstElement1(eps);
		printf("\r\n");
		findFirstElement2(eps);
		printf("\r\n");
		findFirstElement3(eps);
		printf("\r\n");
		break;
	case '5':
		printf("Task5 \r\n");
		findFirstNegativeElement1(eps);
		printf("\r\n");
		findFirstNegativeElement2(eps);
		printf("\r\n");
		findFirstNegativeElement3(eps);
		printf("\r\n");
		break;
	default:
		printf("Wrong input");
		break;
	}

	system("pause");
}
