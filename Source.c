#include <stdio.h>

int main()
{
	pointer();
	return 0;
}

int addup(float a, float b)
{
	return (a + b);
}

int subtract(float a, float b)
{
	return (a - b);
}

int multiply(float a, float b)
{
	return (a * b);
}

int divide(float a, float b)
{
	if (b == 0)
	{
		puts("cannot be divided by 0");
	}
	else
		return (a / b);
}

int pointer() 
{
	char o;
	float a, b,c;
	float (*operation[])(float, float) = { ['+'] = addup,['-'] = subtract,['*'] = multiply,['/'] = divide };
	while (10 > 0)
	{
		puts("\nwhat you want to do?\n");
		puts("enter:\n+ to add up;\n- to subtract;\n* to multiply;\n/ to divide;\n 0 to exit;\n");
		scanf(" %c", &o);

		//если было введено больше 1 символа
		if (getchar() != '\n') {
			printf("Error\n");

			// Очистка буфера ввода
			while (getchar() != '\n');

			continue; // Повторяем ввод заново
		}

		if (o != '+' && o != '-' && o != '*' && o != '/' && o != '0')
		{
			puts("\nerror");
			pointer();
		}
		if (o == '0')
		{
			//choice();
			exit(0);
		}
		puts("\nenter the first number: ");
		scanf("%f", &a);
		puts("enter the second number: ");
		scanf("%f", &b);
		c = operation[o](a, b);
		if (o == '+')
		{
			printf("\n%g + %g = %g\n", a, b, c);
		}
		if (o == '-')
		{
			printf("\n%g - %g = %g\n", a, b, c);
		}
		if (o == '*')
		{
			printf("\n%g * %g = %g\n", a, b, c);
		}
		if (o == '/')
		{
			if (b != 0)
			{
				printf("\n%g / %g = %g\n", a, b, c);
			}
			else
				puts("error");
		}
	}
}