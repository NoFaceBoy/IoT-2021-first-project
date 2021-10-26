#include<stdio.h>
#include<math.h>

void main() {

	double x = 0;

	for (x = 0; x <= 0.5; x = x + 0.05)
	{
		int n = 1;
		double num = 0;
		double sum = 1;
		do
		{
			/*		Вираз		*/
			int m = 9;
			int doub = (n % 2 == 0) ? 1 : -1;
			for (int j = 9; j <= (m + n - 1); j++)
			{
				doub = doub * j;
			}

			/*	Обчислення факторіалу	*/
			int factorial = 1;
			for (int i = 1; i <= n; i++)
			{
				factorial = factorial * i;
			}

			num = (doub / factorial) * pow(x, n);
			
			sum = sum + num;
			
			n++;

		} while (fabs(num) > 0.001);
		printf("x = %lf, function = %lf \n", x, sum);
	}
}
