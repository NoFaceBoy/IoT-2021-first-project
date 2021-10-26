#include<stdio.h>
#include<math.h>

void main1() {

	for (double x = 6; x <= 9; x = x + 0.2)
	{
		double function;
		if (x < 7)
		{
			function = log10(x * log(x) + sin(x));
		}
		else if (x >= 8)
		{
			function = log(sin(x) + 4) / log(3);
		}
		else
		{
			function = (1 / (16 + 1 / cos(x)));
		}
		printf("x = %lf, solution = %lf \n", x, function);
	}
}
