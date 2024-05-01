#include <stdio.h>
#include <stdlib.h>

int main()
{
	switchcase();
	return 0;
}

int operations(char o)
{
	//если было введено больше 1 сивола
	if (getchar() != '\n')
	{
		//сообщение об ошибке
		printf("error\n");

		// Очистка буфера ввода
		while (getchar() != '\n');

		switchcase(); // Повторяем ввод заново
	}

	float a, b;
	if (o != '+' && o != '-' && o != '*' && o != '/' && o != '0')
	{
		puts("\nerror");
		switchcase();
	}
	puts("enter the first number: ");
	scanf("%f", &a);
	puts("enter the second number: ");
	scanf("%f", &b);
	switch (o)
	{
	case '0':
		exit(0);
	case '+':
		printf("\n%g + %g = %g\n", a, b, (a + b));
		switchcase();
	case '-':
		printf("\n%g - %g = %g\n", a, b, (a - b));
		switchcase();
	case '*':
		printf("\n%g * %g = %g\n", a, b, (a * b));
		switchcase();
	case '/':
		if (b == 0)
		{
			puts("cannot be divided by 0");
			switchcase(); 
		}
		else
		{
			printf("\n%g / %g = %g\n", a, b, (a / b));
			switchcase();
		}
	}
}

int switchcase()
{
	char o;
	puts("\nwhat you want to do?");
	puts("enter:\n+ to add up;\n- to subtract;\n* to multiply;\n/ to divide;\n 0 to exit;\n");
	while (10 > 0)
	{
		scanf(" %c", &o);
		if (o == '0')
		{
			//choice();
			exit(0);
		}
		else
		{
			operations(o);
		}
	}
}